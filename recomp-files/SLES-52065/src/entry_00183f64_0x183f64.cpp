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

// Function: entry_00183f64
// Address: 0x183f64 - 0x183fb4
void entry_00183f64_0x183f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183f64_0x183f64");
#endif

    switch (ctx->pc) {
        case 0x183f78u: goto label_183f78;
        default: break;
    }

    ctx->pc = 0x183f64u;

    // 0x183f64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x183f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183f68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x183f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x183f6c: 0x24a58f10  addiu       $a1, $a1, -0x70F0
    ctx->pc = 0x183f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
    // 0x183f70: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x183F70u;
    SET_GPR_U32(ctx, 31, 0x183F78u);
    ctx->pc = 0x183F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F70u;
    // 0x183f74: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x183F70u, 0x183F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F78u;
label_183f78:
    // 0x183f78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x183f7c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x183f80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x183f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x183f84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x183f88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183f88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183f8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183f8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183f90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183f94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183f94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183f98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183f9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183fac: 0x3e00008  jr          $ra
    ctx->pc = 0x183FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FACu;
        // 0x183fb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183FB4u;
}
