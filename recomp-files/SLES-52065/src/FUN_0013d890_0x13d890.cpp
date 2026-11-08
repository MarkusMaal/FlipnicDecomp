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

// Function: FUN_0013d890
// Address: 0x13d890 - 0x13d8e4
void FUN_0013d890_0x13d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d890_0x13d890");
#endif

    switch (ctx->pc) {
        case 0x13d890u: goto label_13d890;
        case 0x13d894u: goto label_13d894;
        case 0x13d898u: goto label_13d898;
        case 0x13d89cu: goto label_13d89c;
        case 0x13d8a0u: goto label_13d8a0;
        case 0x13d8a4u: goto label_13d8a4;
        case 0x13d8a8u: goto label_13d8a8;
        case 0x13d8acu: goto label_13d8ac;
        case 0x13d8b0u: goto label_13d8b0;
        case 0x13d8b4u: goto label_13d8b4;
        case 0x13d8b8u: goto label_13d8b8;
        case 0x13d8bcu: goto label_13d8bc;
        case 0x13d8c0u: goto label_13d8c0;
        case 0x13d8c4u: goto label_13d8c4;
        case 0x13d8c8u: goto label_13d8c8;
        case 0x13d8ccu: goto label_13d8cc;
        case 0x13d8d0u: goto label_13d8d0;
        case 0x13d8d4u: goto label_13d8d4;
        case 0x13d8d8u: goto label_13d8d8;
        case 0x13d8dcu: goto label_13d8dc;
        case 0x13d8e0u: goto label_13d8e0;
        default: break;
    }

    ctx->pc = 0x13d890u;

label_13d890:
    // 0x13d890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13d894:
    // 0x13d894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d898:
    // 0x13d898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13d89c:
    // 0x13d89c: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13d89cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13d8a0:
    // 0x13d8a0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_13d8a4:
    if (ctx->pc == 0x13D8A4u) {
        ctx->pc = 0x13D8A8u;
        goto label_13d8a8;
    }
    ctx->pc = 0x13D8A0u;
    {
        const bool branch_taken_0x13d8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d8a0) {
            ctx->pc = 0x13D8D0u;
            goto label_13d8d0;
        }
    }
    ctx->pc = 0x13D8A8u;
label_13d8a8:
    // 0x13d8a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d8ac:
    // 0x13d8ac: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13d8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13d8b0:
    // 0x13d8b0: 0x320f809  jalr        $t9
label_13d8b4:
    if (ctx->pc == 0x13D8B4u) {
        ctx->pc = 0x13D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8B0u;
        // 0x13d8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D8B8u;
        goto label_13d8b8;
    }
    ctx->pc = 0x13D8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D8B8u);
        ctx->pc = 0x13D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8B0u;
        // 0x13d8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8B0u, 0x13D8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D8B8u;
label_13d8b8:
    // 0x13d8b8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13d8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d8bc:
    // 0x13d8bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13d8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13d8c0:
    // 0x13d8c0: 0x320f809  jalr        $t9
label_13d8c4:
    if (ctx->pc == 0x13D8C4u) {
        ctx->pc = 0x13D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8C0u;
        // 0x13d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D8C8u;
        goto label_13d8c8;
    }
    ctx->pc = 0x13D8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D8C8u);
        ctx->pc = 0x13D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8C0u;
        // 0x13d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8C0u, 0x13D8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D8C8u;
label_13d8c8:
    // 0x13d8c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_13d8cc:
    if (ctx->pc == 0x13D8CCu) {
        ctx->pc = 0x13D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8C8u;
        // 0x13d8cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D8D0u;
        goto label_13d8d0;
    }
    ctx->pc = 0x13D8C8u;
    {
        const bool branch_taken_0x13d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8C8u;
        // 0x13d8cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8c8) {
            ctx->pc = 0x13D8DCu;
            goto label_13d8dc;
        }
    }
    ctx->pc = 0x13D8D0u;
label_13d8d0:
    // 0x13d8d0: 0x908200da  lbu         $v0, 0xDA($a0)
    ctx->pc = 0x13d8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 218)));
label_13d8d4:
    // 0x13d8d4: 0x0  nop
    ctx->pc = 0x13d8d4u;
    // NOP
label_13d8d8:
    // 0x13d8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d8dc:
    // 0x13d8dc: 0x3e00008  jr          $ra
label_13d8e0:
    if (ctx->pc == 0x13D8E0u) {
        ctx->pc = 0x13D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8DCu;
        // 0x13d8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D8E4u;
        goto label_fallthrough_0x13d8dc;
    }
    ctx->pc = 0x13D8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8DCu;
        // 0x13d8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d8dc:
    ctx->pc = 0x13D8E4u;
}
