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

// Function: entry_00121140
// Address: 0x121140 - 0x12115c
void entry_00121140_0x121140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121140_0x121140");
#endif

    ctx->pc = 0x121140u;

    // 0x121140: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x121140) {
            ctx->pc = 0x12115Cu;
            return;
        }
    }
    ctx->pc = 0x121148u;
    // 0x121148: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12114c: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x12114cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x121150: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x121150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x121154: 0xc0481e8  jal         func_1207A0
    ctx->pc = 0x121154u;
    SET_GPR_U32(ctx, 31, 0x12115Cu);
    ctx->pc = 0x121158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121154u;
    // 0x121158: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1207A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1207A0u, 0x121154u, 0x12115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12115Cu;
}
