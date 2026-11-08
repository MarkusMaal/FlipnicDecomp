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

// Function: FUN_001ebbe8
// Address: 0x1ebbe8 - 0x1ebc64
void FUN_001ebbe8_0x1ebbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebbe8_0x1ebbe8");
#endif

    switch (ctx->pc) {
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc40u: goto label_1ebc40;
        default: break;
    }

    ctx->pc = 0x1ebbe8u;

    // 0x1ebbe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ebbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ebbec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ebbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ebbf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebbf4: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x1ebbf4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ebbf8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ebbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ebbfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ebbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ebc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ebc04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ebc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc08: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EBC08u;
    {
        const bool branch_taken_0x1ebc08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC08u;
        // 0x1ebc0c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc08) {
            ctx->pc = 0x1EBC48u;
            goto label_1ebc48;
        }
    }
    ctx->pc = 0x1EBC10u;
    // 0x1ebc10: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ebc14: 0x8e02a3b0  lw          $v0, -0x5C50($s0)
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A3B0u));
    // 0x1ebc18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBC18u;
    {
        const bool branch_taken_0x1ebc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC18u;
        // 0x1ebc1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc18) {
            ctx->pc = 0x1EBC38u;
            goto label_1ebc38;
        }
    }
    ctx->pc = 0x1EBC20u;
    // 0x1ebc20: 0xc07b330  jal         func_1ECCC0
    ctx->pc = 0x1EBC20u;
    SET_GPR_U32(ctx, 31, 0x1EBC28u);
    ctx->pc = 0x1ECCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECCC0u, 0x1EBC20u, 0x1EBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC28u;
label_1ebc28:
    // 0x1ebc28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBC28u;
    {
        const bool branch_taken_0x1ebc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC28u;
        // 0x1ebc2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc28) {
            ctx->pc = 0x1EBC48u;
            goto label_1ebc48;
        }
    }
    ctx->pc = 0x1EBC30u;
    // 0x1ebc30: 0xae02a3b0  sw          $v0, -0x5C50($s0)
    ctx->pc = 0x1ebc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943664), GPR_U32(ctx, 2));
    // 0x1ebc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc38:
    // 0x1ebc38: 0xc07b2a8  jal         func_1ECAA0
    ctx->pc = 0x1EBC38u;
    SET_GPR_U32(ctx, 31, 0x1EBC40u);
    ctx->pc = 0x1EBC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC38u;
    // 0x1ebc3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECAA0u, 0x1EBC38u, 0x1EBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC40u;
label_1ebc40:
    // 0x1ebc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBC40u;
    {
        const bool branch_taken_0x1ebc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC40u;
        // 0x1ebc44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc40) {
            ctx->pc = 0x1EBC50u;
            goto label_1ebc50;
        }
    }
    ctx->pc = 0x1EBC48u;
label_1ebc48:
    // 0x1ebc48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebc4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ebc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebc50:
    // 0x1ebc50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebc50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebc54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ebc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC5Cu;
        // 0x1ebc60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC64u;
}
