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

// Function: entry_00185030
// Address: 0x185030 - 0x18508c
void entry_00185030_0x185030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185030_0x185030");
#endif

    switch (ctx->pc) {
        case 0x18504cu: goto label_18504c;
        default: break;
    }

    ctx->pc = 0x185030u;

    // 0x185030: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185034: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x185034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x185038: 0xa0239103  sb          $v1, -0x6EFD($at)
    ctx->pc = 0x185038u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x369103u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x369103u, _value); } while (0);
    // 0x18503c: 0x24a590a0  addiu       $a1, $a1, -0x6F60
    ctx->pc = 0x18503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938784));
    // 0x185040: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x185040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185044: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x185044u;
    SET_GPR_U32(ctx, 31, 0x18504Cu);
    ctx->pc = 0x185048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185044u;
    // 0x185048: 0x240600b0  addiu       $a2, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x185044u, 0x18504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18504Cu;
label_18504c:
    // 0x18504c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x18504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x185050: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x185050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x185054: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x185054u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x185058: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x185058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18505c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18505cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185060: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x185060u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x185064: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x185064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x185068: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x185068u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18506c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18506cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x185070: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x185070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185074: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x185074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185078: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x185078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18507c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18507cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185080: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185084: 0x3e00008  jr          $ra
    ctx->pc = 0x185084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185084u;
        // 0x185088: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18508Cu;
}
