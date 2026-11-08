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

// Function: entry_001fd388
// Address: 0x1fd388 - 0x1fd3a8
void entry_001fd388_0x1fd388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd388_0x1fd388");
#endif

    switch (ctx->pc) {
        case 0x1fd390u: goto label_1fd390;
        default: break;
    }

    ctx->pc = 0x1fd388u;

    // 0x1fd388: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x1FD388u;
    SET_GPR_U32(ctx, 31, 0x1FD390u);
    ctx->pc = 0x1FD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD388u;
    // 0x1fd38c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x1FD388u, 0x1FD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD390u;
label_1fd390:
    // 0x1fd390: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1fd390u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd394: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd398: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x1fd398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x1fd39c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1fd39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1fd3a0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD3A0u;
    {
        const bool branch_taken_0x1fd3a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3a0) {
            ctx->pc = 0x1FD3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD3A0u;
            // 0x1fd3a4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD3A8u;
            return;
        }
    }
    ctx->pc = 0x1FD3A8u;
}
