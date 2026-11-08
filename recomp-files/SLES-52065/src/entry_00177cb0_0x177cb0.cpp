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

// Function: entry_00177cb0
// Address: 0x177cb0 - 0x177cf0
void entry_00177cb0_0x177cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177cb0_0x177cb0");
#endif

    switch (ctx->pc) {
        case 0x177cbcu: goto label_177cbc;
        case 0x177cc4u: goto label_177cc4;
        case 0x177cccu: goto label_177ccc;
        case 0x177ce4u: goto label_177ce4;
        default: break;
    }

    ctx->pc = 0x177cb0u;

    // 0x177cb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177cb4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177CB4u;
    SET_GPR_U32(ctx, 31, 0x177CBCu);
    ctx->pc = 0x177CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CB4u;
    // 0x177cb8: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177CB4u, 0x177CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CBCu;
label_177cbc:
    // 0x177cbc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177CBCu;
    SET_GPR_U32(ctx, 31, 0x177CC4u);
    ctx->pc = 0x177CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CBCu;
    // 0x177cc0: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177CBCu, 0x177CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CC4u;
label_177cc4:
    // 0x177cc4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177CC4u;
    SET_GPR_U32(ctx, 31, 0x177CCCu);
    ctx->pc = 0x177CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CC4u;
    // 0x177cc8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177CC4u, 0x177CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CCCu;
label_177ccc:
    // 0x177ccc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x177cd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177cd4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x177cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x177cd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cdc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x177CDCu;
    SET_GPR_U32(ctx, 31, 0x177CE4u);
    ctx->pc = 0x177CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CDCu;
    // 0x177ce0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x177CDCu, 0x177CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CE4u;
label_177ce4:
    // 0x177ce4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x177ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x177ce8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x177ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x177cec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x177cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x177cf0u;
}
