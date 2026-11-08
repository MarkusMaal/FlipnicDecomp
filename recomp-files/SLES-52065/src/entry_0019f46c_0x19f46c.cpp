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

// Function: entry_0019f46c
// Address: 0x19f46c - 0x19f4c8
void entry_0019f46c_0x19f46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f46c_0x19f46c");
#endif

    switch (ctx->pc) {
        case 0x19f474u: goto label_19f474;
        case 0x19f4b4u: goto label_19f4b4;
        case 0x19f4c0u: goto label_19f4c0;
        default: break;
    }

    ctx->pc = 0x19f46cu;

    // 0x19f46c: 0xc042270  jal         func_1089C0
    ctx->pc = 0x19F46Cu;
    SET_GPR_U32(ctx, 31, 0x19F474u);
    ctx->pc = 0x19F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F46Cu;
    // 0x19f470: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1089C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1089C0u, 0x19F46Cu, 0x19F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F474u;
label_19f474:
    // 0x19f474: 0xae80068c  sw          $zero, 0x68C($s4)
    ctx->pc = 0x19f474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1676), GPR_U32(ctx, 0));
    // 0x19f478: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f47c: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f480: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f488: 0xac60284c  sw          $zero, 0x284C($v1)
    ctx->pc = 0x19f488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10316), GPR_U32(ctx, 0));
    // 0x19f48c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f490: 0xac602838  sw          $zero, 0x2838($v1)
    ctx->pc = 0x19f490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10296), GPR_U32(ctx, 0));
    // 0x19f494: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f498: 0xa06228fe  sb          $v0, 0x28FE($v1)
    ctx->pc = 0x19f498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10494), (uint8_t)GPR_U32(ctx, 2));
    // 0x19f49c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f4a0: 0xac402840  sw          $zero, 0x2840($v0)
    ctx->pc = 0x19f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10304), GPR_U32(ctx, 0));
    // 0x19f4a4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f4a8: 0xac40283c  sw          $zero, 0x283C($v0)
    ctx->pc = 0x19f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10300), GPR_U32(ctx, 0));
    // 0x19f4ac: 0xc06ce10  jal         func_1B3840
    ctx->pc = 0x19F4ACu;
    SET_GPR_U32(ctx, 31, 0x19F4B4u);
    ctx->pc = 0x19F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4ACu;
    // 0x19f4b0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3840u, 0x19F4ACu, 0x19F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4B4u;
label_19f4b4:
    // 0x19f4b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4b8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F4B8u;
    SET_GPR_U32(ctx, 31, 0x19F4C0u);
    ctx->pc = 0x19F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4B8u;
    // 0x19f4bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F4B8u, 0x19F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4C0u;
label_19f4c0:
    // 0x19f4c0: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x19F4C0u;
    {
        const bool branch_taken_0x19f4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f4c0) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F4C8u;
}
