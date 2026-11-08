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

// Function: FUN_0017e200
// Address: 0x17e200 - 0x17e2c8
void FUN_0017e200_0x17e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e200_0x17e200");
#endif

    switch (ctx->pc) {
        case 0x17e220u: goto label_17e220;
        case 0x17e270u: goto label_17e270;
        case 0x17e294u: goto label_17e294;
        default: break;
    }

    ctx->pc = 0x17e200u;

    // 0x17e200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e20c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17e20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e210: 0x8c85101c  lw          $a1, 0x101C($a0)
    ctx->pc = 0x17e210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
    // 0x17e214: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x17e218: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17E218u;
    SET_GPR_U32(ctx, 31, 0x17E220u);
    ctx->pc = 0x17E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E218u;
    // 0x17e21c: 0x8c861020  lw          $a2, 0x1020($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E218u, 0x17E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E220u;
label_17e220:
    // 0x17e220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E220u;
    {
        const bool branch_taken_0x17e220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E220u;
        // 0x17e224: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e220) {
            ctx->pc = 0x17E230u;
            goto label_17e230;
        }
    }
    ctx->pc = 0x17E228u;
    // 0x17e228: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17E228u;
    {
        const bool branch_taken_0x17e228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E228u;
        // 0x17e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e228) {
            ctx->pc = 0x17E2B8u;
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17E230u;
label_17e230:
    // 0x17e230: 0x1203001a  beq         $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E230u;
    {
        const bool branch_taken_0x17e230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e230) {
            ctx->pc = 0x17E29Cu;
            goto label_17e29c;
        }
    }
    ctx->pc = 0x17E238u;
    // 0x17e238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e23c: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E23Cu;
    {
        const bool branch_taken_0x17e23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e23c) {
            ctx->pc = 0x17E278u;
            goto label_17e278;
        }
    }
    ctx->pc = 0x17E244u;
    // 0x17e244: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E244u;
    {
        const bool branch_taken_0x17e244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e244) {
            ctx->pc = 0x17E254u;
            goto label_17e254;
        }
    }
    ctx->pc = 0x17E24Cu;
    // 0x17e24c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17E24Cu;
    {
        const bool branch_taken_0x17e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E24Cu;
        // 0x17e250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e24c) {
            ctx->pc = 0x17E2B8u;
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17E254u;
label_17e254:
    // 0x17e254: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e258: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E258u;
    {
        const bool branch_taken_0x17e258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e258) {
            ctx->pc = 0x17E268u;
            goto label_17e268;
        }
    }
    ctx->pc = 0x17E260u;
    // 0x17e260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E260u;
    {
        const bool branch_taken_0x17e260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E260u;
        // 0x17e264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e260) {
            ctx->pc = 0x17E270u;
            goto label_17e270;
        }
    }
    ctx->pc = 0x17E268u;
label_17e268:
    // 0x17e268: 0xc05f52c  jal         func_17D4B0
    ctx->pc = 0x17E268u;
    SET_GPR_U32(ctx, 31, 0x17E270u);
    ctx->pc = 0x17D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4B0u, 0x17E268u, 0x17E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E270u;
label_17e270:
    // 0x17e270: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17E270u;
    {
        const bool branch_taken_0x17e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E270u;
        // 0x17e274: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e270) {
            ctx->pc = 0x17E2BCu;
            goto label_17e2bc;
        }
    }
    ctx->pc = 0x17E278u;
label_17e278:
    // 0x17e278: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e27c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E27Cu;
    {
        const bool branch_taken_0x17e27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e27c) {
            ctx->pc = 0x17E28Cu;
            goto label_17e28c;
        }
    }
    ctx->pc = 0x17E284u;
    // 0x17e284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E284u;
    {
        const bool branch_taken_0x17e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E284u;
        // 0x17e288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e284) {
            ctx->pc = 0x17E294u;
            goto label_17e294;
        }
    }
    ctx->pc = 0x17E28Cu;
label_17e28c:
    // 0x17e28c: 0xc05f528  jal         func_17D4A0
    ctx->pc = 0x17E28Cu;
    SET_GPR_U32(ctx, 31, 0x17E294u);
    ctx->pc = 0x17D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4A0u, 0x17E28Cu, 0x17E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E294u;
label_17e294:
    // 0x17e294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17E294u;
    {
        const bool branch_taken_0x17e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e294) {
            ctx->pc = 0x17E2B8u;
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17E29Cu;
label_17e29c:
    // 0x17e29c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e2a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E2A0u;
    {
        const bool branch_taken_0x17e2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e2a0) {
            ctx->pc = 0x17E2B0u;
            goto label_17e2b0;
        }
    }
    ctx->pc = 0x17E2A8u;
    // 0x17e2a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E2A8u;
    {
        const bool branch_taken_0x17e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A8u;
        // 0x17e2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a8) {
            ctx->pc = 0x17E2B8u;
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17E2B0u;
label_17e2b0:
    // 0x17e2b0: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x17e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x17e2b4: 0x0  nop
    ctx->pc = 0x17e2b4u;
    // NOP
label_17e2b8:
    // 0x17e2b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e2bc:
    // 0x17e2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2C0u;
        // 0x17e2c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E2C8u;
}
