#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001eddb8
// Address: 0x1eddb8 - 0x1ede64
void FUN_001eddb8_0x1eddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eddb8_0x1eddb8");
#endif

    switch (ctx->pc) {
        case 0x1eddecu: goto label_1eddec;
        case 0x1ede0cu: goto label_1ede0c;
        default: break;
    }

    ctx->pc = 0x1eddb8u;

    // 0x1eddb8: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x1eddb8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x1eddbc: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x1eddbcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
    // 0x1eddc0: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EDDC0u;
    {
        const bool branch_taken_0x1eddc0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDC0u;
        // 0x1eddc4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddc0) {
            ctx->pc = 0x1EDE5Cu;
            goto label_1ede5c;
        }
    }
    ctx->pc = 0x1EDDC8u;
    // 0x1eddc8: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x1eddc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
    // 0x1eddcc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1eddccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1eddd0: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x1eddd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
    // 0x1eddd4: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x1eddd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1eddd8: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x1eddd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x1edddc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1edddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1edde0: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x1edde0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x1edde4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDDE4u;
    {
        const bool branch_taken_0x1edde4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDE4u;
        // 0x1edde8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edde4) {
            ctx->pc = 0x1EDE08u;
            goto label_1ede08;
        }
    }
    ctx->pc = 0x1EDDECu;
label_1eddec:
    // 0x1eddec: 0xf  sync
    ctx->pc = 0x1eddecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1eddf0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1eddf0u;
    // CACHE instruction (ignored)
    // 0x1eddf4: 0xf  sync
    ctx->pc = 0x1eddf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1eddf8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1eddf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1eddfc: 0x0  nop
    ctx->pc = 0x1eddfcu;
    // NOP
    // 0x1ede00: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EDE00u;
    {
        const bool branch_taken_0x1ede00 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x1EDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE00u;
        // 0x1ede04: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede00) {
            ctx->pc = 0x1EDDECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eddec;
        }
    }
    ctx->pc = 0x1EDE08u;
label_1ede08:
    // 0x1ede08: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_1ede0c:
    if (ctx->pc == 0x1EDE0Cu) {
        ctx->pc = 0x1EDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE08u;
        // 0x1ede0c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE10u;
        goto label_fallthrough_0x1ede08;
    }
    ctx->pc = 0x1EDE08u;
    {
        const bool branch_taken_0x1ede08 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE08u;
        // 0x1ede0c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede08) {
            ctx->pc = 0x1EDE5Cu;
            goto label_1ede5c;
        }
    }
label_fallthrough_0x1ede08:
    ctx->pc = 0x1EDE10u;
    // 0x1ede10: 0xf  sync
    ctx->pc = 0x1ede10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede14: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1ede14u;
    // CACHE instruction (ignored)
    // 0x1ede18: 0xf  sync
    ctx->pc = 0x1ede18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede1c: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x1ede1cu;
    // CACHE instruction (ignored)
    // 0x1ede20: 0xf  sync
    ctx->pc = 0x1ede20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede24: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x1ede24u;
    // CACHE instruction (ignored)
    // 0x1ede28: 0xf  sync
    ctx->pc = 0x1ede28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede2c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x1ede2cu;
    // CACHE instruction (ignored)
    // 0x1ede30: 0xf  sync
    ctx->pc = 0x1ede30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede34: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x1ede34u;
    // CACHE instruction (ignored)
    // 0x1ede38: 0xf  sync
    ctx->pc = 0x1ede38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede3c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x1ede3cu;
    // CACHE instruction (ignored)
    // 0x1ede40: 0xf  sync
    ctx->pc = 0x1ede40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede44: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x1ede44u;
    // CACHE instruction (ignored)
    // 0x1ede48: 0xf  sync
    ctx->pc = 0x1ede48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede4c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x1ede4cu;
    // CACHE instruction (ignored)
    // 0x1ede50: 0xf  sync
    ctx->pc = 0x1ede50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede54: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EDE54u;
    {
        const bool branch_taken_0x1ede54 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1EDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE54u;
        // 0x1ede58: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede54) {
            ctx->pc = 0x1EDE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ede0c;
        }
    }
    ctx->pc = 0x1EDE5Cu;
label_1ede5c:
    // 0x1ede5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDE64u;
}
