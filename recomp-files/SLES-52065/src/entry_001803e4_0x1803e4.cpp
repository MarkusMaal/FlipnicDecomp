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

// Function: entry_001803e4
// Address: 0x1803e4 - 0x18041c
void entry_001803e4_0x1803e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001803e4_0x1803e4");
#endif

    switch (ctx->pc) {
        case 0x180410u: goto label_180410;
        default: break;
    }

    ctx->pc = 0x1803e4u;

    // 0x1803e4: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1803e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1803e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1803E8u;
    {
        const bool branch_taken_0x1803e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1803e8) {
            ctx->pc = 0x18041Cu;
            return;
        }
    }
    ctx->pc = 0x1803F0u;
    // 0x1803f0: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1803f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1803f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1803f8: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1803F8u;
    {
        const bool branch_taken_0x1803f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1803f8) {
            ctx->pc = 0x18041Cu;
            return;
        }
    }
    ctx->pc = 0x180400u;
    // 0x180400: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x180404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180408: 0xc0607bc  jal         func_181EF0
    ctx->pc = 0x180408u;
    SET_GPR_U32(ctx, 31, 0x180410u);
    ctx->pc = 0x18040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180408u;
    // 0x18040c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EF0u, 0x180408u, 0x180410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180410u;
label_180410:
    // 0x180410: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x180414: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x180414u;
    {
        const bool branch_taken_0x180414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180414u;
        // 0x180418: 0xaf838670  sw          $v1, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180414) {
            ctx->pc = 0x180A0Cu;
            return;
        }
    }
    ctx->pc = 0x18041Cu;
}
