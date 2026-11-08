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

// Function: FUN_00171240
// Address: 0x171240 - 0x1712a0
void FUN_00171240_0x171240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171240_0x171240");
#endif

    switch (ctx->pc) {
        case 0x171254u: goto label_171254;
        case 0x171290u: goto label_171290;
        default: break;
    }

    ctx->pc = 0x171240u;

    // 0x171240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17124c: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x17124Cu;
    SET_GPR_U32(ctx, 31, 0x171254u);
    ctx->pc = 0x171250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17124Cu;
    // 0x171250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x17124Cu, 0x171254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171254u;
label_171254:
    // 0x171254: 0x8e0501d8  lw          $a1, 0x1D8($s0)
    ctx->pc = 0x171254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
    // 0x171258: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17125c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x17125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x171260: 0x84a7000a  lh          $a3, 0xA($a1)
    ctx->pc = 0x171260u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x171264: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x171268: 0x80420023  lb          $v0, 0x23($v0)
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x17126c: 0x84a5000c  lh          $a1, 0xC($a1)
    ctx->pc = 0x17126cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x171270: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x171274: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x171278: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x171278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17127c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17127cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171284: 0x8c452cd8  lw          $a1, 0x2CD8($v0)
    ctx->pc = 0x171284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x171288: 0xc05c4f8  jal         func_1713E0
    ctx->pc = 0x171288u;
    SET_GPR_U32(ctx, 31, 0x171290u);
    ctx->pc = 0x17128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171288u;
    // 0x17128c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1713E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1713E0u, 0x171288u, 0x171290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171290u;
label_171290:
    // 0x171290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171298: 0x3e00008  jr          $ra
    ctx->pc = 0x171298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171298u;
        // 0x17129c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1712A0u;
}
