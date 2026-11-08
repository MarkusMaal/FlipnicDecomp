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

// Function: entry_0019e6ec
// Address: 0x19e6ec - 0x19e71c
void entry_0019e6ec_0x19e6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e6ec_0x19e6ec");
#endif

    switch (ctx->pc) {
        case 0x19e700u: goto label_19e700;
        case 0x19e714u: goto label_19e714;
        default: break;
    }

    ctx->pc = 0x19e6ecu;

label_19e6ec:
    // 0x19e6ec: 0x0  nop
    ctx->pc = 0x19e6ecu;
    // NOP
label_19e6f0:
    // 0x19e6f0: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x19e6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e6f4:
    // 0x19e6f4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19e6f8:
    // 0x19e6f8: 0x320f809  jalr        $t9
label_19e6fc:
    if (ctx->pc == 0x19E6FCu) {
        ctx->pc = 0x19E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6F8u;
        // 0x19e6fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E700u;
        goto label_19e700;
    }
    ctx->pc = 0x19E6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E700u);
        ctx->pc = 0x19E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6F8u;
        // 0x19e6fc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6F8u, 0x19E700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E700u;
label_19e700:
    // 0x19e700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e704:
    // 0x19e704: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_19e708:
    if (ctx->pc == 0x19E708u) {
        ctx->pc = 0x19E70Cu;
        goto label_19e70c;
    }
    ctx->pc = 0x19E704u;
    {
        const bool branch_taken_0x19e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e704) {
            ctx->pc = 0x19E71Cu;
            return;
        }
    }
    ctx->pc = 0x19E70Cu;
label_19e70c:
    // 0x19e70c: 0xc04be08  jal         func_12F820
label_19e710:
    if (ctx->pc == 0x19E710u) {
        ctx->pc = 0x19E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E70Cu;
        // 0x19e710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E714u;
        goto label_19e714;
    }
    ctx->pc = 0x19E70Cu;
    SET_GPR_U32(ctx, 31, 0x19E714u);
    ctx->pc = 0x19E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E70Cu;
    // 0x19e710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x19E70Cu, 0x19E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E714u;
label_19e714:
    // 0x19e714: 0x10000003  b           . + 4 + (0x3 << 2)
label_19e718:
    if (ctx->pc == 0x19E718u) {
        ctx->pc = 0x19E71Cu;
        goto label_fallthrough_0x19e714;
    }
    ctx->pc = 0x19E714u;
    {
        const bool branch_taken_0x19e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e714) {
            ctx->pc = 0x19E724u;
            return;
        }
    }
label_fallthrough_0x19e714:
    ctx->pc = 0x19E71Cu;
}
