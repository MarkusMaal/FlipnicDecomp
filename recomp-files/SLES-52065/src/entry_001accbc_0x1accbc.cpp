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

// Function: entry_001accbc
// Address: 0x1accbc - 0x1acd3c
void entry_001accbc_0x1accbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001accbc_0x1accbc");
#endif

    switch (ctx->pc) {
        case 0x1accc4u: goto label_1accc4;
        case 0x1accd0u: goto label_1accd0;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accf8u: goto label_1accf8;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd30u: goto label_1acd30;
        default: break;
    }

    ctx->pc = 0x1accbcu;

    // 0x1accbc: 0xc055c40  jal         func_157100
    ctx->pc = 0x1ACCBCu;
    SET_GPR_U32(ctx, 31, 0x1ACCC4u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1ACCBCu, 0x1ACCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCC4u;
label_1accc4:
    // 0x1accc4: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1accc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1accc8: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1ACCC8u;
    SET_GPR_U32(ctx, 31, 0x1ACCD0u);
    ctx->pc = 0x1ACCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCC8u;
    // 0x1acccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1ACCC8u, 0x1ACCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCD0u;
label_1accd0:
    // 0x1accd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1accd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1accd4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1accd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1accd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1accd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1accdc: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1acce0: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1ACCE0u;
    SET_GPR_U32(ctx, 31, 0x1ACCE8u);
    ctx->pc = 0x1ACCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCE0u;
    // 0x1acce4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1ACCE0u, 0x1ACCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCE8u;
label_1acce8:
    // 0x1acce8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1acce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1accec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1accecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1accf0: 0xc062858  jal         func_18A160
    ctx->pc = 0x1ACCF0u;
    SET_GPR_U32(ctx, 31, 0x1ACCF8u);
    ctx->pc = 0x1ACCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCF0u;
    // 0x1accf4: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1ACCF0u, 0x1ACCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCF8u;
label_1accf8:
    // 0x1accf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1accf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1accfc: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1accfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1acd00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1acd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1acd04: 0x0  nop
    ctx->pc = 0x1acd04u;
    // NOP
    // 0x1acd08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1acd08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1acd0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1acd0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1acd10: 0xc062860  jal         func_18A180
    ctx->pc = 0x1ACD10u;
    SET_GPR_U32(ctx, 31, 0x1ACD18u);
    ctx->pc = 0x1ACD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD10u;
    // 0x1acd14: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1ACD10u, 0x1ACD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD18u;
label_1acd18:
    // 0x1acd18: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1acd1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1acd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1acd20: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1acd24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1acd28: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1ACD28u;
    SET_GPR_U32(ctx, 31, 0x1ACD30u);
    ctx->pc = 0x1ACD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD28u;
    // 0x1acd2c: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1ACD28u, 0x1ACD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD30u;
label_1acd30:
    // 0x1acd30: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1acd34: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1ACD34u;
    SET_GPR_U32(ctx, 31, 0x1ACD3Cu);
    ctx->pc = 0x1ACD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD34u;
    // 0x1acd38: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1ACD34u, 0x1ACD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD3Cu;
}
