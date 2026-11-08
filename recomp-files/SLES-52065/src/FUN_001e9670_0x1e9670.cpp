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

// Function: FUN_001e9670
// Address: 0x1e9670 - 0x1e9710
void FUN_001e9670_0x1e9670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9670_0x1e9670");
#endif

    ctx->pc = 0x1e9670u;

    // 0x1e9670: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1e9670u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9674: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1e9674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e9678: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9678u;
    {
        const bool branch_taken_0x1e9678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9678) {
            ctx->pc = 0x1E9690u;
            goto label_1e9690;
        }
    }
    ctx->pc = 0x1E9680u;
    // 0x1e9680: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1e9684: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e9688: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E9688u;
    {
        const bool branch_taken_0x1e9688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9688u;
        // 0x1e968c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9688) {
            ctx->pc = 0x1E9708u;
            goto label_1e9708;
        }
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e9690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e9694: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9694u;
    {
        const bool branch_taken_0x1e9694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9694u;
        // 0x1e9698: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9694) {
            ctx->pc = 0x1E96B4u;
            goto label_1e96b4;
        }
    }
    ctx->pc = 0x1E969Cu;
    // 0x1e969c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e969cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e96a0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1e96a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1e96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e96a8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e96a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e96ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E96ACu;
    {
        const bool branch_taken_0x1e96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96ACu;
        // 0x1e96b0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96ac) {
            ctx->pc = 0x1E9708u;
            goto label_1e9708;
        }
    }
    ctx->pc = 0x1E96B4u;
label_1e96b4:
    // 0x1e96b4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e96b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e96b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E96B8u;
    {
        const bool branch_taken_0x1e96b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96B8u;
        // 0x1e96bc: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96b8) {
            ctx->pc = 0x1E96E0u;
            goto label_1e96e0;
        }
    }
    ctx->pc = 0x1E96C0u;
    // 0x1e96c0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1e96c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1e96c4: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1e96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e96c8: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e96cc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1e96ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e96d0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1e96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1e96d4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x1e96d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1e96d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E96D8u;
    {
        const bool branch_taken_0x1e96d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E96D8u;
        // 0x1e96dc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96d8) {
            ctx->pc = 0x1E9708u;
            goto label_1e9708;
        }
    }
    ctx->pc = 0x1E96E0u;
label_1e96e0:
    // 0x1e96e0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1e96e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1e96e4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1e96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1e96e8: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x1e96e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e96ec: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e96ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e96f0: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x1e96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e96f4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1e96f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1e96f8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1e96f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1e96fc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1e96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e9700: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e9700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e9704: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e9704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1e9708:
    // 0x1e9708: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9710u;
}
