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

// Function: caseD_4
// Address: 0x1a6404 - 0x1a6444
void caseD_4_0x1a6404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1a6404");
#endif

    switch (ctx->pc) {
        case 0x1a640cu: goto label_1a640c;
        case 0x1a643cu: goto label_1a643c;
        default: break;
    }

    ctx->pc = 0x1a6404u;

    // 0x1a6404: 0xc062114  jal         func_188450
    ctx->pc = 0x1A6404u;
    SET_GPR_U32(ctx, 31, 0x1A640Cu);
    ctx->pc = 0x1A6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6404u;
    // 0x1a6408: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6404u, 0x1A640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A640Cu;
label_1a640c:
    // 0x1a640c: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1a6410: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6414: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a6414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a6418: 0xde8800d0  ld          $t0, 0xD0($s4)
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a641c: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
    // 0x1a6420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6424: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a6424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1a6428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a642c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6430: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6434: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A6434u;
    SET_GPR_U32(ctx, 31, 0x1A643Cu);
    ctx->pc = 0x1A6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6434u;
    // 0x1a6438: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A6434u, 0x1A643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A643Cu;
label_1a643c:
    // 0x1a643c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A643Cu;
    {
        const bool branch_taken_0x1a643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a643c) {
            ctx->pc = 0x1A64B0u;
            return;
        }
    }
    ctx->pc = 0x1A6444u;
}
