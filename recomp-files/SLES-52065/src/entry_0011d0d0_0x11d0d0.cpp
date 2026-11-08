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

// Function: entry_0011d0d0
// Address: 0x11d0d0 - 0x11d12c
void entry_0011d0d0_0x11d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d0d0_0x11d0d0");
#endif

    switch (ctx->pc) {
        case 0x11d0dcu: goto label_11d0dc;
        case 0x11d0e4u: goto label_11d0e4;
        case 0x11d114u: goto label_11d114;
        default: break;
    }

    ctx->pc = 0x11d0d0u;

    // 0x11d0d0: 0x8e300338  lw          $s0, 0x338($s1)
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x11d0d4: 0xc07512c  jal         func_1D44B0
    ctx->pc = 0x11D0D4u;
    SET_GPR_U32(ctx, 31, 0x11D0DCu);
    ctx->pc = 0x11D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0D4u;
    // 0x11d0d8: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x11D0D4u, 0x11D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0DCu;
label_11d0dc:
    // 0x11d0dc: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11D0DCu;
    SET_GPR_U32(ctx, 31, 0x11D0E4u);
    ctx->pc = 0x11D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0DCu;
    // 0x11d0e0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11D0DCu, 0x11D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0E4u;
label_11d0e4:
    // 0x11d0e4: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x11d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x11d0e8: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11d0ec: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x11d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x11d0f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d0f4: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x11d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x11d0f8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x11d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x11d0fc: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x11d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x11d100: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x11d100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x11d104: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x11d104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x11d108: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x11d108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x11d10c: 0xc074e36  jal         func_1D38D8
    ctx->pc = 0x11D10Cu;
    SET_GPR_U32(ctx, 31, 0x11D114u);
    ctx->pc = 0x11D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D10Cu;
    // 0x11d110: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D38D8u, 0x11D10Cu, 0x11D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D114u;
label_11d114:
    // 0x11d114: 0x822203ec  lb          $v0, 0x3EC($s1)
    ctx->pc = 0x11d114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x11d118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D118u;
    {
        const bool branch_taken_0x11d118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d118) {
            ctx->pc = 0x11D12Cu;
            return;
        }
    }
    ctx->pc = 0x11D120u;
    // 0x11d120: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x11d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11d124: 0x8e2203e8  lw          $v0, 0x3E8($s1)
    ctx->pc = 0x11d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11d128: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x11d128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x11d12cu;
}
