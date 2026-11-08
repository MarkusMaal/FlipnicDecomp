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

// Function: entry_0014e94c
// Address: 0x14e94c - 0x14e984
void entry_0014e94c_0x14e94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e94c_0x14e94c");
#endif

    switch (ctx->pc) {
        case 0x14e97cu: goto label_14e97c;
        default: break;
    }

    ctx->pc = 0x14e94cu;

    // 0x14e94c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14e950: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x14e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14e954: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x14e954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x14e958: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e95c: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x14e95cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14e960: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E960u;
        // 0x14e964: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14E984u;
            return;
        }
    }
    ctx->pc = 0x14E968u;
    // 0x14e968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e96c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14e970: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e974: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E974u;
    SET_GPR_U32(ctx, 31, 0x14E97Cu);
    ctx->pc = 0x14E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E974u;
    // 0x14e978: 0x24a5f2e0  addiu       $a1, $a1, -0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E974u, 0x14E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E97Cu;
label_14e97c:
    // 0x14e97c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E97Cu;
    SET_GPR_U32(ctx, 31, 0x14E984u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E97Cu, 0x14E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E984u;
}
