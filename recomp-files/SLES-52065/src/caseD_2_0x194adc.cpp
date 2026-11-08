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

// Function: caseD_2
// Address: 0x194adc - 0x194b40
void caseD_2_0x194adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x194adc");
#endif

    switch (ctx->pc) {
        case 0x194af8u: goto label_194af8;
        case 0x194b04u: goto label_194b04;
        case 0x194b18u: goto label_194b18;
        case 0x194b28u: goto label_194b28;
        case 0x194b38u: goto label_194b38;
        default: break;
    }

    ctx->pc = 0x194adcu;

    // 0x194adc: 0x0  nop
    ctx->pc = 0x194adcu;
    // NOP
    // 0x194ae0: 0x8e15002c  lw          $s5, 0x2C($s0)
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194ae4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194ae8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x194ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x194aec: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194af0: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194AF0u;
    SET_GPR_U32(ctx, 31, 0x194AF8u);
    ctx->pc = 0x194AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AF0u;
    // 0x194af4: 0x7fa000c0  sq          $zero, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194AF0u, 0x194AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AF8u;
label_194af8:
    // 0x194af8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194afc: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x194AFCu;
    SET_GPR_U32(ctx, 31, 0x194B04u);
    ctx->pc = 0x194B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AFCu;
    // 0x194b00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194AFCu, 0x194B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B04u;
label_194b04:
    // 0x194b04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x194b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b08: 0x124000d5  beqz        $s2, . + 4 + (0xD5 << 2)
    ctx->pc = 0x194B08u;
    {
        const bool branch_taken_0x194b08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b08) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194B10u;
    // 0x194b10: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x194B10u;
    SET_GPR_U32(ctx, 31, 0x194B18u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x194B10u, 0x194B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B18u;
label_194b18:
    // 0x194b18: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x194B18u;
    {
        const bool branch_taken_0x194b18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x194b18) {
            ctx->pc = 0x194B40u;
            return;
        }
    }
    ctx->pc = 0x194B20u;
    // 0x194b20: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x194B20u;
    SET_GPR_U32(ctx, 31, 0x194B28u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x194B20u, 0x194B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B28u;
label_194b28:
    // 0x194b28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x194b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b30: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x194B30u;
    SET_GPR_U32(ctx, 31, 0x194B38u);
    ctx->pc = 0x194B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B30u;
    // 0x194b34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x194B30u, 0x194B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B38u;
label_194b38:
    // 0x194b38: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x194B38u;
    {
        const bool branch_taken_0x194b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b38) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194B40u;
}
