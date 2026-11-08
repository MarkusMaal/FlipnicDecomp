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

// Function: entry_0011bef8
// Address: 0x11bef8 - 0x11bf40
void entry_0011bef8_0x11bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bef8_0x11bef8");
#endif

    switch (ctx->pc) {
        case 0x11bf14u: goto label_11bf14;
        default: break;
    }

    ctx->pc = 0x11bef8u;

    // 0x11bef8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x11bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x11befc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bf00: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf04: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf08: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf0c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BF0Cu;
    SET_GPR_U32(ctx, 31, 0x11BF14u);
    ctx->pc = 0x11BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF0Cu;
    // 0x11bf10: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BF0Cu, 0x11BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF14u;
label_11bf14:
    // 0x11bf14: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x11bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x11bf18: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x11bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11bf1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BF1Cu;
    {
        const bool branch_taken_0x11bf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bf1c) {
            ctx->pc = 0x11BF40u;
            return;
        }
    }
    ctx->pc = 0x11BF24u;
    // 0x11bf24: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x11bf28: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11bf2c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x11bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x11bf30: 0x2484e780  addiu       $a0, $a0, -0x1880
    ctx->pc = 0x11bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961024));
    // 0x11bf34: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x11bf38: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11BF38u;
    SET_GPR_U32(ctx, 31, 0x11BF40u);
    ctx->pc = 0x11BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF38u;
    // 0x11bf3c: 0x622818  mult        $a1, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11BF38u, 0x11BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF40u;
}
