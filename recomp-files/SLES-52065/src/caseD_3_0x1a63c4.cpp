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

// Function: caseD_3
// Address: 0x1a63c4 - 0x1a6404
void caseD_3_0x1a63c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a63c4");
#endif

    switch (ctx->pc) {
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63fcu: goto label_1a63fc;
        default: break;
    }

    ctx->pc = 0x1a63c4u;

    // 0x1a63c4: 0xc062114  jal         func_188450
    ctx->pc = 0x1A63C4u;
    SET_GPR_U32(ctx, 31, 0x1A63CCu);
    ctx->pc = 0x1A63C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63C4u;
    // 0x1a63c8: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A63C4u, 0x1A63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63CCu;
label_1a63cc:
    // 0x1a63cc: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1a63d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a63d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a63d8: 0xde8800d0  ld          $t0, 0xD0($s4)
    ctx->pc = 0x1a63d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a63dc: 0x24422bf0  addiu       $v0, $v0, 0x2BF0
    ctx->pc = 0x1a63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11248));
    // 0x1a63e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a63e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63e4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1a63e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a63ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a63f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a63f4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A63F4u;
    SET_GPR_U32(ctx, 31, 0x1A63FCu);
    ctx->pc = 0x1A63F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63F4u;
    // 0x1a63f8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A63F4u, 0x1A63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63FCu;
label_1a63fc:
    // 0x1a63fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A63FCu;
    {
        const bool branch_taken_0x1a63fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63fc) {
            ctx->pc = 0x1A64B0u;
            return;
        }
    }
    ctx->pc = 0x1A6404u;
}
