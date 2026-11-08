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

// Function: entry_00136b78
// Address: 0x136b78 - 0x136bc0
void entry_00136b78_0x136b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b78_0x136b78");
#endif

    switch (ctx->pc) {
        case 0x136b90u: goto label_136b90;
        case 0x136b98u: goto label_136b98;
        case 0x136bb4u: goto label_136bb4;
        case 0x136bbcu: goto label_136bbc;
        default: break;
    }

    ctx->pc = 0x136b78u;

label_136b78:
    // 0x136b78: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x136b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136b7c:
    // 0x136b7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x136b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136b80:
    // 0x136b80: 0xc7808570  lwc1        $f0, -0x7A90($gp)
    ctx->pc = 0x136b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136b84:
    // 0x136b84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x136b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_136b88:
    // 0x136b88: 0xc061c5c  jal         func_187170
label_136b8c:
    if (ctx->pc == 0x136B8Cu) {
        ctx->pc = 0x136B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B88u;
        // 0x136b8c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B90u;
        goto label_136b90;
    }
    ctx->pc = 0x136B88u;
    SET_GPR_U32(ctx, 31, 0x136B90u);
    ctx->pc = 0x136B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B88u;
    // 0x136b8c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x136B88u, 0x136B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B90u;
label_136b90:
    // 0x136b90: 0xc04c724  jal         func_131C90
label_136b94:
    if (ctx->pc == 0x136B94u) {
        ctx->pc = 0x136B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B90u;
        // 0x136b94: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B98u;
        goto label_136b98;
    }
    ctx->pc = 0x136B90u;
    SET_GPR_U32(ctx, 31, 0x136B98u);
    ctx->pc = 0x136B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B90u;
    // 0x136b94: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C90u, 0x136B90u, 0x136B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B98u;
label_136b98:
    // 0x136b98: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_136b9c:
    // 0x136b9c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x136b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_136ba0:
    // 0x136ba0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x136ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_136ba4:
    // 0x136ba4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136ba8:
    // 0x136ba8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_136bac:
    // 0x136bac: 0x320f809  jalr        $t9
label_136bb0:
    if (ctx->pc == 0x136BB0u) {
        ctx->pc = 0x136BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BACu;
        // 0x136bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BB4u;
        goto label_136bb4;
    }
    ctx->pc = 0x136BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136BB4u);
        ctx->pc = 0x136BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BACu;
        // 0x136bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136BACu, 0x136BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136BB4u;
label_136bb4:
    // 0x136bb4: 0xc04dba4  jal         func_136E90
label_136bb8:
    if (ctx->pc == 0x136BB8u) {
        ctx->pc = 0x136BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BB4u;
        // 0x136bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BBCu;
        goto label_136bbc;
    }
    ctx->pc = 0x136BB4u;
    SET_GPR_U32(ctx, 31, 0x136BBCu);
    ctx->pc = 0x136BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BB4u;
    // 0x136bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136BB4u, 0x136BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BBCu;
label_136bbc:
    // 0x136bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136bc0u;
}
