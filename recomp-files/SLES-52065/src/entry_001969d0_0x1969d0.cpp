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

// Function: entry_001969d0
// Address: 0x1969d0 - 0x196a50
void entry_001969d0_0x1969d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001969d0_0x1969d0");
#endif

    switch (ctx->pc) {
        case 0x1969f8u: goto label_1969f8;
        case 0x196a08u: goto label_196a08;
        case 0x196a20u: goto label_196a20;
        case 0x196a38u: goto label_196a38;
        case 0x196a44u: goto label_196a44;
        default: break;
    }

    ctx->pc = 0x1969d0u;

    // 0x1969d0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1969d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1969d4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1969D4u;
    {
        const bool branch_taken_0x1969d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969d4) {
            ctx->pc = 0x196A50u;
            return;
        }
    }
    ctx->pc = 0x1969DCu;
    // 0x1969dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1969dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1969e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1969e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1969e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1969e8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1969E8u;
    {
        const bool branch_taken_0x1969e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969e8) {
            ctx->pc = 0x196A50u;
            return;
        }
    }
    ctx->pc = 0x1969F0u;
    // 0x1969f0: 0xc057f74  jal         func_15FDD0
    ctx->pc = 0x1969F0u;
    SET_GPR_U32(ctx, 31, 0x1969F8u);
    ctx->pc = 0x1969F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969F0u;
    // 0x1969f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x1969F0u, 0x1969F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969F8u;
label_1969f8:
    // 0x1969f8: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1969F8u;
    {
        const bool branch_taken_0x1969f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1969f8) {
            ctx->pc = 0x196A50u;
            return;
        }
    }
    ctx->pc = 0x196A00u;
    // 0x196a00: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x196A00u;
    SET_GPR_U32(ctx, 31, 0x196A08u);
    ctx->pc = 0x196A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A00u;
    // 0x196a04: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x196A00u, 0x196A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A08u;
label_196a08:
    // 0x196a08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x196a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x196a10: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196a14: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x196a18: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x196A18u;
    SET_GPR_U32(ctx, 31, 0x196A20u);
    ctx->pc = 0x196A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A18u;
    // 0x196a1c: 0x8e450450  lw          $a1, 0x450($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x196A18u, 0x196A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A20u;
label_196a20:
    // 0x196a20: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196a24: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x196a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x196a28: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x196a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x196a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196a30: 0xc057ef0  jal         func_15FBC0
    ctx->pc = 0x196A30u;
    SET_GPR_U32(ctx, 31, 0x196A38u);
    ctx->pc = 0x196A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A30u;
    // 0x196a34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBC0u, 0x196A30u, 0x196A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A38u;
label_196a38:
    // 0x196a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a3c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x196A3Cu;
    SET_GPR_U32(ctx, 31, 0x196A44u);
    ctx->pc = 0x196A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A3Cu;
    // 0x196a40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196A3Cu, 0x196A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A44u;
label_196a44:
    // 0x196a44: 0xaeb30674  sw          $s3, 0x674($s5)
    ctx->pc = 0x196a44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 19));
    // 0x196a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a4c: 0xaea30678  sw          $v1, 0x678($s5)
    ctx->pc = 0x196a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 3));
    ctx->pc = 0x196a50u;
}
