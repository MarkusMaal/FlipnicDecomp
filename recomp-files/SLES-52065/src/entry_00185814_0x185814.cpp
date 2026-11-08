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

// Function: entry_00185814
// Address: 0x185814 - 0x185870
void entry_00185814_0x185814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185814_0x185814");
#endif

    switch (ctx->pc) {
        case 0x185830u: goto label_185830;
        default: break;
    }

    ctx->pc = 0x185814u;

    // 0x185814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185818: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x18581c: 0xa02391c3  sb          $v1, -0x6E3D($at)
    ctx->pc = 0x18581cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3691C3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3691C3u, _value); } while (0);
    // 0x185820: 0x24a59160  addiu       $a1, $a1, -0x6EA0
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938976));
    // 0x185824: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185828: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185828u;
    SET_GPR_U32(ctx, 31, 0x185830u);
    ctx->pc = 0x18582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185828u;
    // 0x18582c: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185828u, 0x185830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185830u;
label_185830:
    // 0x185830: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x185830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185834: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x185834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x185838: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x185838u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x18583c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x185840: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x185840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185844: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185844u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185848: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18584c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18584cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x185850: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x185850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185854: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185858: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18585c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18585cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185868: 0x3e00008  jr          $ra
    ctx->pc = 0x185868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185868u;
        // 0x18586c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185870u;
}
