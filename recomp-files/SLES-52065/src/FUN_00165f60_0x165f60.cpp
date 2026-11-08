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

// Function: FUN_00165f60
// Address: 0x165f60 - 0x166034
void FUN_00165f60_0x165f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165f60_0x165f60");
#endif

    switch (ctx->pc) {
        case 0x165ffcu: goto label_165ffc;
        case 0x16601cu: goto label_16601c;
        default: break;
    }

    ctx->pc = 0x165f60u;

    // 0x165f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165f70: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x165F70u;
    {
        const bool branch_taken_0x165f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x165F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F70u;
        // 0x165f74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f70) {
            ctx->pc = 0x165FCCu;
            goto label_165fcc;
        }
    }
    ctx->pc = 0x165F78u;
    // 0x165f78: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x165F78u;
    {
        const bool branch_taken_0x165f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F78u;
        // 0x165f7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f78) {
            ctx->pc = 0x165FBCu;
            goto label_165fbc;
        }
    }
    ctx->pc = 0x165F80u;
    // 0x165f80: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165F80u;
    {
        const bool branch_taken_0x165f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x165f80) {
            ctx->pc = 0x165F90u;
            goto label_165f90;
        }
    }
    ctx->pc = 0x165F88u;
    // 0x165f88: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x165F88u;
    {
        const bool branch_taken_0x165f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F88u;
        // 0x165f8c: 0x86020226  lh          $v0, 0x226($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f88) {
            ctx->pc = 0x165FDCu;
            goto label_165fdc;
        }
    }
    ctx->pc = 0x165F90u;
label_165f90:
    // 0x165f90: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165f94: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165F94u;
    {
        const bool branch_taken_0x165f94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165f94) {
            ctx->pc = 0x165FACu;
            goto label_165fac;
        }
    }
    ctx->pc = 0x165F9Cu;
    // 0x165f9c: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x165f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x165fa0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165FA4u;
    {
        const bool branch_taken_0x165fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FA4u;
        // 0x165fa8: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fa4) {
            ctx->pc = 0x165FD8u;
            goto label_165fd8;
        }
    }
    ctx->pc = 0x165FACu;
label_165fac:
    // 0x165fac: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x165facu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x165fb0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165FB4u;
    {
        const bool branch_taken_0x165fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FB4u;
        // 0x165fb8: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fb4) {
            ctx->pc = 0x165FD8u;
            goto label_165fd8;
        }
    }
    ctx->pc = 0x165FBCu;
label_165fbc:
    // 0x165fbc: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x165fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x165fc0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165FC4u;
    {
        const bool branch_taken_0x165fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FC4u;
        // 0x165fc8: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fc4) {
            ctx->pc = 0x165FD8u;
            goto label_165fd8;
        }
    }
    ctx->pc = 0x165FCCu;
label_165fcc:
    // 0x165fcc: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x165fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x165fd0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fd4: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x165fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
label_165fd8:
    // 0x165fd8: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
label_165fdc:
    // 0x165fdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165FDCu;
    {
        const bool branch_taken_0x165fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FDCu;
        // 0x165fe0: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fdc) {
            ctx->pc = 0x166004u;
            goto label_166004;
        }
    }
    ctx->pc = 0x165FE4u;
    // 0x165fe4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x165fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x165fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165fec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165ff0: 0xa6050224  sh          $a1, 0x224($s0)
    ctx->pc = 0x165ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 5));
    // 0x165ff4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x165FF4u;
    SET_GPR_U32(ctx, 31, 0x165FFCu);
    ctx->pc = 0x165FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FF4u;
    // 0x165ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x165FF4u, 0x165FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FFCu;
label_165ffc:
    // 0x165ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165FFCu;
    {
        const bool branch_taken_0x165ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FFCu;
        // 0x166000: 0x86030220  lh          $v1, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ffc) {
            ctx->pc = 0x166020u;
            goto label_166020;
        }
    }
    ctx->pc = 0x166004u;
label_166004:
    // 0x166004: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x166004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166008: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16600c: 0xa6030224  sh          $v1, 0x224($s0)
    ctx->pc = 0x16600cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x166010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166014: 0xc0425a4  jal         func_109690
    ctx->pc = 0x166014u;
    SET_GPR_U32(ctx, 31, 0x16601Cu);
    ctx->pc = 0x166018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166014u;
    // 0x166018: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x166014u, 0x16601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16601Cu;
label_16601c:
    // 0x16601c: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x16601cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
label_166020:
    // 0x166020: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x166020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x166024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16602c: 0x3e00008  jr          $ra
    ctx->pc = 0x16602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16602Cu;
        // 0x166030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16602Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166034u;
}
