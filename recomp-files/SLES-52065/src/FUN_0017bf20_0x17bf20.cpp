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

// Function: FUN_0017bf20
// Address: 0x17bf20 - 0x17bf9c
void FUN_0017bf20_0x17bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bf20_0x17bf20");
#endif

    switch (ctx->pc) {
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf7cu: goto label_17bf7c;
        case 0x17bf88u: goto label_17bf88;
        default: break;
    }

    ctx->pc = 0x17bf20u;

    // 0x17bf20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bf24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17bf28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17bf2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bf30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17bf30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf34: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BF34u;
    {
        const bool branch_taken_0x17bf34 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x17BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF34u;
        // 0x17bf38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf34) {
            ctx->pc = 0x17BF58u;
            goto label_17bf58;
        }
    }
    ctx->pc = 0x17BF3Cu;
    // 0x17bf3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17bf40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bf48: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17BF48u;
    SET_GPR_U32(ctx, 31, 0x17BF50u);
    ctx->pc = 0x17BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF48u;
    // 0x17bf4c: 0xa22001f9  sb          $zero, 0x1F9($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 505), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BF48u, 0x17BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF50u;
label_17bf50:
    // 0x17bf50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17BF50u;
    {
        const bool branch_taken_0x17bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF50u;
        // 0x17bf54: 0xae300230  sw          $s0, 0x230($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf50) {
            ctx->pc = 0x17BF88u;
            goto label_17bf88;
        }
    }
    ctx->pc = 0x17BF58u;
label_17bf58:
    // 0x17bf58: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x17bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x17bf5c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17BF5Cu;
    {
        const bool branch_taken_0x17bf5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17bf5c) {
            ctx->pc = 0x17BF88u;
            goto label_17bf88;
        }
    }
    ctx->pc = 0x17BF64u;
    // 0x17bf64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17bf68: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x17bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
    // 0x17bf6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bf74: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17BF74u;
    SET_GPR_U32(ctx, 31, 0x17BF7Cu);
    ctx->pc = 0x17BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF74u;
    // 0x17bf78: 0xa22501f9  sb          $a1, 0x1F9($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 505), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BF74u, 0x17BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF7Cu;
label_17bf7c:
    // 0x17bf7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf80: 0xc042118  jal         func_108460
    ctx->pc = 0x17BF80u;
    SET_GPR_U32(ctx, 31, 0x17BF88u);
    ctx->pc = 0x17BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF80u;
    // 0x17bf84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17BF80u, 0x17BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF88u;
label_17bf88:
    // 0x17bf88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf94: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF94u;
        // 0x17bf98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF9Cu;
}
