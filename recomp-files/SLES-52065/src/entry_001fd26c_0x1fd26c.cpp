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

// Function: entry_001fd26c
// Address: 0x1fd26c - 0x1fd294
void entry_001fd26c_0x1fd26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd26c_0x1fd26c");
#endif

    switch (ctx->pc) {
        case 0x1fd278u: goto label_1fd278;
        default: break;
    }

    ctx->pc = 0x1fd26cu;

    // 0x1fd26c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fd26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd270: 0xc07effe  jal         func_1FBFF8
    ctx->pc = 0x1FD270u;
    SET_GPR_U32(ctx, 31, 0x1FD278u);
    ctx->pc = 0x1FD274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD270u;
    // 0x1fd274: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFF8u, 0x1FD270u, 0x1FD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD278u;
label_1fd278:
    // 0x1fd278: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1fd278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1fd27c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd280: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x1fd280u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fd284: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1fd284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fd288: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FD288u;
    {
        const bool branch_taken_0x1fd288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD288u;
        // 0x1fd28c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd288) {
            ctx->pc = 0x1FD250u;
            return;
        }
    }
    ctx->pc = 0x1FD290u;
    // 0x1fd290: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x1fd294u;
}
