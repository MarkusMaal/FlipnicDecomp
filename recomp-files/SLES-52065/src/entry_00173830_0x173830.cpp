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

// Function: entry_00173830
// Address: 0x173830 - 0x173870
void entry_00173830_0x173830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173830_0x173830");
#endif

    switch (ctx->pc) {
        case 0x17383cu: goto label_17383c;
        case 0x173844u: goto label_173844;
        case 0x17384cu: goto label_17384c;
        case 0x173864u: goto label_173864;
        default: break;
    }

    ctx->pc = 0x173830u;

    // 0x173830: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x173834: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173834u;
    SET_GPR_U32(ctx, 31, 0x17383Cu);
    ctx->pc = 0x173838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173834u;
    // 0x173838: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173834u, 0x17383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17383Cu;
label_17383c:
    // 0x17383c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17383Cu;
    SET_GPR_U32(ctx, 31, 0x173844u);
    ctx->pc = 0x173840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17383Cu;
    // 0x173840: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17383Cu, 0x173844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173844u;
label_173844:
    // 0x173844: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173844u;
    SET_GPR_U32(ctx, 31, 0x17384Cu);
    ctx->pc = 0x173848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173844u;
    // 0x173848: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173844u, 0x17384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17384Cu;
label_17384c:
    // 0x17384c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x173850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173854: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x173854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x173858: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x173858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17385c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17385Cu;
    SET_GPR_U32(ctx, 31, 0x173864u);
    ctx->pc = 0x173860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17385Cu;
    // 0x173860: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17385Cu, 0x173864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173864u;
label_173864:
    // 0x173864: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x173864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x173868: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17386c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17386cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x173870u;
}
