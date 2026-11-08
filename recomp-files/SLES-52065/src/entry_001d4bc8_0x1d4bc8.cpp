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

// Function: entry_001d4bc8
// Address: 0x1d4bc8 - 0x1d4bf0
void entry_001d4bc8_0x1d4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4bc8_0x1d4bc8");
#endif

    switch (ctx->pc) {
        case 0x1d4becu: goto label_1d4bec;
        default: break;
    }

    ctx->pc = 0x1d4bc8u;

    // 0x1d4bc8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d4bcc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4bccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d4bd0: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d4bd4: 0x931814  dsllv       $v1, $s3, $a0
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1d4bd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4BDCu;
    {
        const bool branch_taken_0x1d4bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BDCu;
        // 0x1d4be0: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bdc) {
            ctx->pc = 0x1D4BF0u;
            return;
        }
    }
    ctx->pc = 0x1D4BE4u;
    // 0x1d4be4: 0xc07827a  jal         func_1E09E8
    ctx->pc = 0x1D4BE4u;
    SET_GPR_U32(ctx, 31, 0x1D4BECu);
    ctx->pc = 0x1D4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4BE4u;
    // 0x1d4be8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E09E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E09E8u, 0x1D4BE4u, 0x1D4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1d4becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x1d4bf0u;
}
