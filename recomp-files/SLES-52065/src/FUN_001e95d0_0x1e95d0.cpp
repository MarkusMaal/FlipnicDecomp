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

// Function: FUN_001e95d0
// Address: 0x1e95d0 - 0x1e9670
void FUN_001e95d0_0x1e95d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e95d0_0x1e95d0");
#endif

    ctx->pc = 0x1e95d0u;

    // 0x1e95d0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1e95d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e95d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1e95d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e95d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E95D8u;
    {
        const bool branch_taken_0x1e95d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e95d8) {
            ctx->pc = 0x1E95F0u;
            goto label_1e95f0;
        }
    }
    ctx->pc = 0x1E95E0u;
    // 0x1e95e0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1e95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1e95e4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e95e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E95E8u;
    {
        const bool branch_taken_0x1e95e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95E8u;
        // 0x1e95ec: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95e8) {
            ctx->pc = 0x1E9668u;
            goto label_1e9668;
        }
    }
    ctx->pc = 0x1E95F0u;
label_1e95f0:
    // 0x1e95f0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e95f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e95f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E95F4u;
    {
        const bool branch_taken_0x1e95f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95F4u;
        // 0x1e95f8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95f4) {
            ctx->pc = 0x1E9614u;
            goto label_1e9614;
        }
    }
    ctx->pc = 0x1E95FCu;
    // 0x1e95fc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1e95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1e9600: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1e9600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1e9604: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1e9608: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e9608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e960c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E960Cu;
    {
        const bool branch_taken_0x1e960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E960Cu;
        // 0x1e9610: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e960c) {
            ctx->pc = 0x1E9668u;
            goto label_1e9668;
        }
    }
    ctx->pc = 0x1E9614u;
label_1e9614:
    // 0x1e9614: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e9618: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9618u;
    {
        const bool branch_taken_0x1e9618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9618u;
        // 0x1e961c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9618) {
            ctx->pc = 0x1E9640u;
            goto label_1e9640;
        }
    }
    ctx->pc = 0x1E9620u;
    // 0x1e9620: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x1e9624: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1e9624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1e9628: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1e962c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1e962cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e9630: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1e9634: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x1e9634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1e9638: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9638u;
    {
        const bool branch_taken_0x1e9638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9638u;
        // 0x1e963c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9638) {
            ctx->pc = 0x1E9668u;
            goto label_1e9668;
        }
    }
    ctx->pc = 0x1E9640u;
label_1e9640:
    // 0x1e9640: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x1e9644: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1e9644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1e9648: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x1e9648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e964c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e964cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e9650: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e9654: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1e9654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1e9658: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1e9658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1e965c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1e965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e9660: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e9660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e9664: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e9664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1e9668:
    // 0x1e9668: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9670u;
}
