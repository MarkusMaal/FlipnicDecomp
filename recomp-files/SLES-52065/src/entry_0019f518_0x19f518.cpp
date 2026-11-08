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

// Function: entry_0019f518
// Address: 0x19f518 - 0x19f56c
void entry_0019f518_0x19f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f518_0x19f518");
#endif

    switch (ctx->pc) {
        case 0x19f558u: goto label_19f558;
        case 0x19f564u: goto label_19f564;
        default: break;
    }

    ctx->pc = 0x19f518u;

    // 0x19f518: 0xae80068c  sw          $zero, 0x68C($s4)
    ctx->pc = 0x19f518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 0));
    // 0x19f51c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f520: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f524: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f52c: 0xac60284c  sw          $zero, 0x284C($v1)
    ctx->pc = 0x19f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10316), GPR_U32(ctx, 0));
    // 0x19f530: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f534: 0xac602838  sw          $zero, 0x2838($v1)
    ctx->pc = 0x19f534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10296), GPR_U32(ctx, 0));
    // 0x19f538: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f53c: 0xa06228fe  sb          $v0, 0x28FE($v1)
    ctx->pc = 0x19f53cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10494), (uint8_t)GPR_U32(ctx, 2));
    // 0x19f540: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f544: 0xac402840  sw          $zero, 0x2840($v0)
    ctx->pc = 0x19f544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10304), GPR_U32(ctx, 0));
    // 0x19f548: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f54c: 0xac40283c  sw          $zero, 0x283C($v0)
    ctx->pc = 0x19f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10300), GPR_U32(ctx, 0));
    // 0x19f550: 0xc06ce10  jal         func_1B3840
    ctx->pc = 0x19F550u;
    SET_GPR_U32(ctx, 31, 0x19F558u);
    ctx->pc = 0x19F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F550u;
    // 0x19f554: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3840u, 0x19F550u, 0x19F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F558u;
label_19f558:
    // 0x19f558: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f55c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F55Cu;
    SET_GPR_U32(ctx, 31, 0x19F564u);
    ctx->pc = 0x19F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F55Cu;
    // 0x19f560: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F55Cu, 0x19F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F564u;
label_19f564:
    // 0x19f564: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x19F564u;
    {
        const bool branch_taken_0x19f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f564) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F56Cu;
}
