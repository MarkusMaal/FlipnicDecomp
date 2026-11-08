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

// Function: entry_00170cb8
// Address: 0x170cb8 - 0x170d1c
void entry_00170cb8_0x170cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170cb8_0x170cb8");
#endif

    switch (ctx->pc) {
        case 0x170cfcu: goto label_170cfc;
        case 0x170d0cu: goto label_170d0c;
        default: break;
    }

    ctx->pc = 0x170cb8u;

label_170cb8:
    // 0x170cb8: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x170cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170cbc:
    // 0x170cbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x170cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_170cc0:
    // 0x170cc0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_170cc4:
    if (ctx->pc == 0x170CC4u) {
        ctx->pc = 0x170CC8u;
        goto label_170cc8;
    }
    ctx->pc = 0x170CC0u;
    {
        const bool branch_taken_0x170cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170cc0) {
            ctx->pc = 0x170D1Cu;
            return;
        }
    }
    ctx->pc = 0x170CC8u;
label_170cc8:
    // 0x170cc8: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x170cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170ccc:
    // 0x170ccc: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x170cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
label_170cd0:
    // 0x170cd0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x170cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_170cd4:
    // 0x170cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170cd8:
    // 0x170cd8: 0x0  nop
    ctx->pc = 0x170cd8u;
    // NOP
label_170cdc:
    // 0x170cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_170ce0:
    // 0x170ce0: 0x0  nop
    ctx->pc = 0x170ce0u;
    // NOP
label_170ce4:
    // 0x170ce4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_170ce8:
    if (ctx->pc == 0x170CE8u) {
        ctx->pc = 0x170CECu;
        goto label_170cec;
    }
    ctx->pc = 0x170CE4u;
    {
        const bool branch_taken_0x170ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170ce4) {
            ctx->pc = 0x170D1Cu;
            return;
        }
    }
    ctx->pc = 0x170CECu;
label_170cec:
    // 0x170cec: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_170cf0:
    // 0x170cf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_170cf4:
    // 0x170cf4: 0x320f809  jalr        $t9
label_170cf8:
    if (ctx->pc == 0x170CF8u) {
        ctx->pc = 0x170CFCu;
        goto label_170cfc;
    }
    ctx->pc = 0x170CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170CFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CF4u, 0x170CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170CFCu;
label_170cfc:
    // 0x170cfc: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_170d00:
    // 0x170d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170d04:
    // 0x170d04: 0xc062d50  jal         func_18B540
label_170d08:
    if (ctx->pc == 0x170D08u) {
        ctx->pc = 0x170D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D04u;
        // 0x170d08: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D0Cu;
        goto label_170d0c;
    }
    ctx->pc = 0x170D04u;
    SET_GPR_U32(ctx, 31, 0x170D0Cu);
    ctx->pc = 0x170D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D04u;
    // 0x170d08: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x170D04u, 0x170D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D0Cu;
label_170d0c:
    // 0x170d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d10:
    // 0x170d10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_170d14:
    // 0x170d14: 0xc062b5c  jal         func_18AD70
label_170d18:
    if (ctx->pc == 0x170D18u) {
        ctx->pc = 0x170D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D14u;
        // 0x170d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170D1Cu;
        goto label_fallthrough_0x170d14;
    }
    ctx->pc = 0x170D14u;
    SET_GPR_U32(ctx, 31, 0x170D1Cu);
    ctx->pc = 0x170D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D14u;
    // 0x170d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x170D14u, 0x170D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x170d14:
    ctx->pc = 0x170D1Cu;
}
