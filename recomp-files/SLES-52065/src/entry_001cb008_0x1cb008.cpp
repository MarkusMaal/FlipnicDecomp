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

// Function: entry_001cb008
// Address: 0x1cb008 - 0x1cb044
void entry_001cb008_0x1cb008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb008_0x1cb008");
#endif

    switch (ctx->pc) {
        case 0x1cb034u: goto label_1cb034;
        case 0x1cb03cu: goto label_1cb03c;
        default: break;
    }

    ctx->pc = 0x1cb008u;

    // 0x1cb008: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1cb00c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cb010: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB010u;
    {
        const bool branch_taken_0x1cb010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb010) {
            ctx->pc = 0x1CB058u;
            return;
        }
    }
    ctx->pc = 0x1CB018u;
    // 0x1cb018: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1cb018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cb01c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CB01Cu;
    {
        const bool branch_taken_0x1cb01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB01Cu;
        // 0x1cb020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb01c) {
            ctx->pc = 0x1CB044u;
            return;
        }
    }
    ctx->pc = 0x1CB024u;
    // 0x1cb024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb028: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb02c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB02Cu;
    SET_GPR_U32(ctx, 31, 0x1CB034u);
    ctx->pc = 0x1CB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB02Cu;
    // 0x1cb030: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB02Cu, 0x1CB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB034u;
label_1cb034:
    // 0x1cb034: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB034u;
    SET_GPR_U32(ctx, 31, 0x1CB03Cu);
    ctx->pc = 0x1CB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB034u;
    // 0x1cb038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB034u, 0x1CB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB03Cu;
label_1cb03c:
    // 0x1cb03c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB03Cu;
    {
        const bool branch_taken_0x1cb03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB03Cu;
        // 0x1cb040: 0x8e030078  lw          $v1, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb03c) {
            ctx->pc = 0x1CB05Cu;
            return;
        }
    }
    ctx->pc = 0x1CB044u;
}
