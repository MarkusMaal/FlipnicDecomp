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

// Function: entry_00183244
// Address: 0x183244 - 0x183294
void entry_00183244_0x183244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183244_0x183244");
#endif

    switch (ctx->pc) {
        case 0x183258u: goto label_183258;
        default: break;
    }

    ctx->pc = 0x183244u;

    // 0x183244: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183248: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x18324c: 0x24a58d90  addiu       $a1, $a1, -0x7270
    ctx->pc = 0x18324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938000));
    // 0x183250: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x183250u;
    SET_GPR_U32(ctx, 31, 0x183258u);
    ctx->pc = 0x183254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183250u;
    // 0x183254: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x183250u, 0x183258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183258u;
label_183258:
    // 0x183258: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18325c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x18325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x183260: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x183260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183264: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183268: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183268u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18326c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18326cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183270: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183270u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183274: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183274u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183278: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18327c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18327cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18328c: 0x3e00008  jr          $ra
    ctx->pc = 0x18328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18328Cu;
        // 0x183290: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183294u;
}
