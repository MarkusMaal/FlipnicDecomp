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

// Function: entry_00225e80
// Address: 0x225e80 - 0x225ef0
void entry_00225e80_0x225e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225e80_0x225e80");
#endif

    ctx->pc = 0x225e80u;

    // 0x225e80: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225e84: 0x24638570  addiu       $v1, $v1, -0x7A90
    ctx->pc = 0x225e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935920));
    // 0x225e88: 0xaf838220  sw          $v1, -0x7DE0($gp)
    ctx->pc = 0x225e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 3));
    // 0x225e8c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225e90: 0x24638490  addiu       $v1, $v1, -0x7B70
    ctx->pc = 0x225e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935696));
    // 0x225e94: 0xaf838224  sw          $v1, -0x7DDC($gp)
    ctx->pc = 0x225e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935076), GPR_U32(ctx, 3));
    // 0x225e98: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225e9c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x225e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x225ea0: 0xaf838228  sw          $v1, -0x7DD8($gp)
    ctx->pc = 0x225ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935080), GPR_U32(ctx, 3));
    // 0x225ea4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225ea8: 0x24638450  addiu       $v1, $v1, -0x7BB0
    ctx->pc = 0x225ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935632));
    // 0x225eac: 0xaf83822c  sw          $v1, -0x7DD4($gp)
    ctx->pc = 0x225eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935084), GPR_U32(ctx, 3));
    // 0x225eb0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225eb4: 0x24638430  addiu       $v1, $v1, -0x7BD0
    ctx->pc = 0x225eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935600));
    // 0x225eb8: 0xaf838230  sw          $v1, -0x7DD0($gp)
    ctx->pc = 0x225eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935088), GPR_U32(ctx, 3));
    // 0x225ebc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225ec0: 0x24638410  addiu       $v1, $v1, -0x7BF0
    ctx->pc = 0x225ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935568));
    // 0x225ec4: 0xaf838234  sw          $v1, -0x7DCC($gp)
    ctx->pc = 0x225ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935092), GPR_U32(ctx, 3));
    // 0x225ec8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225ecc: 0x246383f0  addiu       $v1, $v1, -0x7C10
    ctx->pc = 0x225eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935536));
    // 0x225ed0: 0xaf838238  sw          $v1, -0x7DC8($gp)
    ctx->pc = 0x225ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935096), GPR_U32(ctx, 3));
    // 0x225ed4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x225ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x225ed8: 0x246383d0  addiu       $v1, $v1, -0x7C30
    ctx->pc = 0x225ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935504));
    // 0x225edc: 0x3e00008  jr          $ra
    ctx->pc = 0x225EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EDCu;
        // 0x225ee0: 0xaf83823c  sw          $v1, -0x7DC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225EE4u;
    // 0x225ee4: 0x0  nop
    ctx->pc = 0x225ee4u;
    // NOP
    // 0x225ee8: 0x0  nop
    ctx->pc = 0x225ee8u;
    // NOP
    // 0x225eec: 0x0  nop
    ctx->pc = 0x225eecu;
    // NOP
    ctx->pc = 0x225ef0u;
}
