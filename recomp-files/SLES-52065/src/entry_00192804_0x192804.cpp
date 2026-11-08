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

// Function: entry_00192804
// Address: 0x192804 - 0x192838
void entry_00192804_0x192804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192804_0x192804");
#endif

    switch (ctx->pc) {
        case 0x192820u: goto label_192820;
        default: break;
    }

    ctx->pc = 0x192804u;

    // 0x192804: 0x0  nop
    ctx->pc = 0x192804u;
    // NOP
    // 0x192808: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x192808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19280c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19280Cu;
    {
        const bool branch_taken_0x19280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19280Cu;
        // 0x192810: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19280c) {
            ctx->pc = 0x1927D8u;
            return;
        }
    }
    ctx->pc = 0x192814u;
    // 0x192814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192818: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x192818u;
    SET_GPR_U32(ctx, 31, 0x192820u);
    ctx->pc = 0x19281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192818u;
    // 0x19281c: 0xae320664  sw          $s2, 0x664($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x192818u, 0x192820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192820u;
label_192820:
    // 0x192820: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x192820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192824: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x192824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x192828: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x192828u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x19282c: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x19282cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x36D700u));
    // 0x192830: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x192830u;
    {
        const bool branch_taken_0x192830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192830u;
        // 0x192834: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192830) {
            ctx->pc = 0x19287Cu;
            return;
        }
    }
    ctx->pc = 0x192838u;
}
