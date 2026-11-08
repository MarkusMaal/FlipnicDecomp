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

// Function: entry_0011cbf4
// Address: 0x11cbf4 - 0x11cc28
void entry_0011cbf4_0x11cbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cbf4_0x11cbf4");
#endif

    switch (ctx->pc) {
        case 0x11cc00u: goto label_11cc00;
        case 0x11cc08u: goto label_11cc08;
        default: break;
    }

    ctx->pc = 0x11cbf4u;

    // 0x11cbf4: 0x0  nop
    ctx->pc = 0x11cbf4u;
    // NOP
    // 0x11cbf8: 0xc082c68  jal         func_20B1A0
    ctx->pc = 0x11CBF8u;
    SET_GPR_U32(ctx, 31, 0x11CC00u);
    ctx->pc = 0x11CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBF8u;
    // 0x11cbfc: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1A0u, 0x11CBF8u, 0x11CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC00u;
label_11cc00:
    // 0x11cc00: 0xc082586  jal         func_209618
    ctx->pc = 0x11CC00u;
    SET_GPR_U32(ctx, 31, 0x11CC08u);
    ctx->pc = 0x11CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC00u;
    // 0x11cc04: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209618u, 0x11CC00u, 0x11CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC08u;
label_11cc08:
    // 0x11cc08: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x11cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11cc0c: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11cc10: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cc14: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x11cc18: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC18u;
    {
        const bool branch_taken_0x11cc18 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC18u;
        // 0x11cc1c: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc18) {
            ctx->pc = 0x11CC28u;
            return;
        }
    }
    ctx->pc = 0x11CC20u;
    // 0x11cc20: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x11cc24: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    ctx->pc = 0x11cc28u;
}
