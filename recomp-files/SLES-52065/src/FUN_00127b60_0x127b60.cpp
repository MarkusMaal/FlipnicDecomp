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

// Function: FUN_00127b60
// Address: 0x127b60 - 0x127c1c
void FUN_00127b60_0x127b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127b60_0x127b60");
#endif

    ctx->pc = 0x127b60u;

    // 0x127b60: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x127b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x127b64: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x127b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x127b68: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x127b6c: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x127B6Cu;
    {
        const bool branch_taken_0x127b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b6c) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127B74u;
    // 0x127b74: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x127b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x127b7c: 0x24a5eb60  addiu       $a1, $a1, -0x14A0
    ctx->pc = 0x127b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962016));
    // 0x127b80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x127b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127b84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x127b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127b88: 0x600008  jr          $v1
    ctx->pc = 0x127B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127B90u: goto label_127b90;
            case 0x127B9Cu: goto label_127b9c;
            case 0x127BB0u: goto label_127bb0;
            case 0x127BBCu: goto label_127bbc;
            case 0x127BC8u: goto label_127bc8;
            case 0x127BD4u: goto label_127bd4;
            case 0x127BECu: goto label_127bec;
            case 0x127BF8u: goto label_127bf8;
            case 0x127C04u: goto label_127c04;
            case 0x127C14u: goto label_127c14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127B90u;
label_127b90:
    // 0x127b90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x127b94: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x127B94u;
    {
        const bool branch_taken_0x127b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B94u;
        // 0x127b98: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b94) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127B9Cu;
label_127b9c:
    // 0x127b9c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x127b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x127ba0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x127BA0u;
    {
        const bool branch_taken_0x127ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ba0) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BA8u;
    // 0x127ba8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x127BA8u;
    {
        const bool branch_taken_0x127ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BA8u;
        // 0x127bac: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ba8) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BB0u;
label_127bb0:
    // 0x127bb0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x127bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127bb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x127BB4u;
    {
        const bool branch_taken_0x127bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BB4u;
        // 0x127bb8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bb4) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BBCu;
label_127bbc:
    // 0x127bbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x127bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x127bc0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x127BC0u;
    {
        const bool branch_taken_0x127bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BC0u;
        // 0x127bc4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bc0) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BC8u;
label_127bc8:
    // 0x127bc8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x127bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x127bcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x127BCCu;
    {
        const bool branch_taken_0x127bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BCCu;
        // 0x127bd0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bcc) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BD4u;
label_127bd4:
    // 0x127bd4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x127bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x127bd8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x127BD8u;
    {
        const bool branch_taken_0x127bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127bd8) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BE0u;
    // 0x127be0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x127be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x127be4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x127BE4u;
    {
        const bool branch_taken_0x127be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BE4u;
        // 0x127be8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127be4) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BECu;
label_127bec:
    // 0x127bec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x127becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x127bf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x127BF0u;
    {
        const bool branch_taken_0x127bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BF0u;
        // 0x127bf4: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bf0) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127BF8u;
label_127bf8:
    // 0x127bf8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x127bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x127bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x127BFCu;
    {
        const bool branch_taken_0x127bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BFCu;
        // 0x127c00: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127bfc) {
            ctx->pc = 0x127C14u;
            goto label_127c14;
        }
    }
    ctx->pc = 0x127C04u;
label_127c04:
    // 0x127c04: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x127c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x127c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c0c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x127c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x127c10: 0xaf83843c  sw          $v1, -0x7BC4($gp)
    ctx->pc = 0x127c10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 3));
label_127c14:
    // 0x127c14: 0x3e00008  jr          $ra
    ctx->pc = 0x127C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127C1Cu;
}
