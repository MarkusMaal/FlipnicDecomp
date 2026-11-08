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

// Function: caseD_7
// Address: 0x1c5e08 - 0x1c5ec0
void caseD_7_0x1c5e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1c5e08");
#endif

    switch (ctx->pc) {
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e98u: goto label_1c5e98;
        case 0x1c5ea0u: goto label_1c5ea0;
        case 0x1c5eacu: goto label_1c5eac;
        default: break;
    }

    ctx->pc = 0x1c5e08u;

    // 0x1c5e08: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E08u;
    SET_GPR_U32(ctx, 31, 0x1C5E10u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E08u, 0x1C5E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E10u;
label_1c5e10:
    // 0x1c5e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e14: 0xc062948  jal         func_18A520
    ctx->pc = 0x1C5E14u;
    SET_GPR_U32(ctx, 31, 0x1C5E1Cu);
    ctx->pc = 0x1C5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E14u;
    // 0x1c5e18: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1C5E14u, 0x1C5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E1Cu;
label_1c5e1c:
    // 0x1c5e1c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E24u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E1Cu, 0x1C5E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E24u;
label_1c5e24:
    // 0x1c5e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e28: 0xc062994  jal         func_18A650
    ctx->pc = 0x1C5E28u;
    SET_GPR_U32(ctx, 31, 0x1C5E30u);
    ctx->pc = 0x1C5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E28u;
    // 0x1c5e2c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1C5E28u, 0x1C5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E30u;
label_1c5e30:
    // 0x1c5e30: 0xc06d334  jal         func_1B4CD0
    ctx->pc = 0x1C5E30u;
    SET_GPR_U32(ctx, 31, 0x1C5E38u);
    ctx->pc = 0x1B4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CD0u, 0x1C5E30u, 0x1C5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E38u;
label_1c5e38:
    // 0x1c5e38: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E38u;
    SET_GPR_U32(ctx, 31, 0x1C5E40u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E38u, 0x1C5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E40u;
label_1c5e40:
    // 0x1c5e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e44: 0xc062948  jal         func_18A520
    ctx->pc = 0x1C5E44u;
    SET_GPR_U32(ctx, 31, 0x1C5E4Cu);
    ctx->pc = 0x1C5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E44u;
    // 0x1c5e48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1C5E44u, 0x1C5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E4Cu;
label_1c5e4c:
    // 0x1c5e4c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1C5E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5E54u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1C5E4Cu, 0x1C5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E54u;
label_1c5e54:
    // 0x1c5e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e58: 0xc062994  jal         func_18A650
    ctx->pc = 0x1C5E58u;
    SET_GPR_U32(ctx, 31, 0x1C5E60u);
    ctx->pc = 0x1C5E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E58u;
    // 0x1c5e5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1C5E58u, 0x1C5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E60u;
label_1c5e60:
    // 0x1c5e60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5e64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c5e68: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c5e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c5e6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5e70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5e74: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C5E74u;
    SET_GPR_U32(ctx, 31, 0x1C5E7Cu);
    ctx->pc = 0x1C5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E74u;
    // 0x1c5e78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C5E74u, 0x1C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c5e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5e88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c5e88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5e8c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c5e8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c5e90: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C5E90u;
    SET_GPR_U32(ctx, 31, 0x1C5E98u);
    ctx->pc = 0x1C5E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E90u;
    // 0x1c5e94: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C5E90u, 0x1C5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E98u;
label_1c5e98:
    // 0x1c5e98: 0xc04d988  jal         func_136620
    ctx->pc = 0x1C5E98u;
    SET_GPR_U32(ctx, 31, 0x1C5EA0u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1C5E98u, 0x1C5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EA0u;
label_1c5ea0:
    // 0x1c5ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ea4: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1C5EA4u;
    SET_GPR_U32(ctx, 31, 0x1C5EACu);
    ctx->pc = 0x1C5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EA4u;
    // 0x1c5ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1C5EA4u, 0x1C5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EACu;
label_1c5eac:
    // 0x1c5eac: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x1c5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5eb0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c5eb8: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x1c5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x1c5ebc: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x1c5ec0u;
}
