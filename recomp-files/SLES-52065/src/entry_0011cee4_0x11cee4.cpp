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

// Function: entry_0011cee4
// Address: 0x11cee4 - 0x11cf18
void entry_0011cee4_0x11cee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cee4_0x11cee4");
#endif

    switch (ctx->pc) {
        case 0x11cef0u: goto label_11cef0;
        case 0x11cef8u: goto label_11cef8;
        default: break;
    }

    ctx->pc = 0x11cee4u;

    // 0x11cee4: 0x0  nop
    ctx->pc = 0x11cee4u;
    // NOP
    // 0x11cee8: 0xc082c68  jal         func_20B1A0
    ctx->pc = 0x11CEE8u;
    SET_GPR_U32(ctx, 31, 0x11CEF0u);
    ctx->pc = 0x11CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEE8u;
    // 0x11ceec: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1A0u, 0x11CEE8u, 0x11CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEF0u;
label_11cef0:
    // 0x11cef0: 0xc082586  jal         func_209618
    ctx->pc = 0x11CEF0u;
    SET_GPR_U32(ctx, 31, 0x11CEF8u);
    ctx->pc = 0x11CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEF0u;
    // 0x11cef4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209618u, 0x11CEF0u, 0x11CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEF8u;
label_11cef8:
    // 0x11cef8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x11cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11cefc: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11cf00: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cf04: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x11cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x11cf08: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CF08u;
    {
        const bool branch_taken_0x11cf08 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF08u;
        // 0x11cf0c: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf08) {
            ctx->pc = 0x11CF18u;
            return;
        }
    }
    ctx->pc = 0x11CF10u;
    // 0x11cf10: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x11cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x11cf14: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x11cf14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x11cf18u;
}
