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

// Function: entry_001b0914
// Address: 0x1b0914 - 0x1b0954
void entry_001b0914_0x1b0914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0914_0x1b0914");
#endif

    switch (ctx->pc) {
        case 0x1b0924u: goto label_1b0924;
        default: break;
    }

    ctx->pc = 0x1b0914u;

    // 0x1b0914: 0x0  nop
    ctx->pc = 0x1b0914u;
    // NOP
    // 0x1b0918: 0x8fb30178  lw          $s3, 0x178($sp)
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1b091c: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B091Cu;
    SET_GPR_U32(ctx, 31, 0x1B0924u);
    ctx->pc = 0x1B0920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B091Cu;
    // 0x1b0920: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B091Cu, 0x1B0924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0924u;
label_1b0924:
    // 0x1b0924: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0924u;
    {
        const bool branch_taken_0x1b0924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0924) {
            ctx->pc = 0x1B0978u;
            return;
        }
    }
    ctx->pc = 0x1B092Cu;
    // 0x1b092c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0930: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0934: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0938: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b093c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0940: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0940u;
    {
        const bool branch_taken_0x1b0940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0940) {
            ctx->pc = 0x1B0954u;
            return;
        }
    }
    ctx->pc = 0x1B0948u;
    // 0x1b0948: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b094c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0950: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0954u;
}
