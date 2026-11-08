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

// Function: FUN_00128ba0
// Address: 0x128ba0 - 0x128d8c
void FUN_00128ba0_0x128ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128ba0_0x128ba0");
#endif

    switch (ctx->pc) {
        case 0x128be8u: goto label_128be8;
        case 0x128bf4u: goto label_128bf4;
        case 0x128c14u: goto label_128c14;
        case 0x128c28u: goto label_128c28;
        case 0x128c40u: goto label_128c40;
        case 0x128c5cu: goto label_128c5c;
        case 0x128c7cu: goto label_128c7c;
        case 0x128ca0u: goto label_128ca0;
        case 0x128cb8u: goto label_128cb8;
        case 0x128d10u: goto label_128d10;
        default: break;
    }

    ctx->pc = 0x128ba0u;

    // 0x128ba0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x128ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x128ba4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x128ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x128ba8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128bac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x128bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x128bb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x128bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x128bb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x128bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x128bb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x128bbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x128bbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x128bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128bc4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x128bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x128bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128bcc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128bd4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x128bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128bdc: 0x24a52e80  addiu       $a1, $a1, 0x2E80
    ctx->pc = 0x128bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11904));
    // 0x128be0: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x128BE0u;
    SET_GPR_U32(ctx, 31, 0x128BE8u);
    ctx->pc = 0x128BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BE0u;
    // 0x128be4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x128BE0u, 0x128BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BE8u;
label_128be8:
    // 0x128be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128bec: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x128BECu;
    SET_GPR_U32(ctx, 31, 0x128BF4u);
    ctx->pc = 0x128BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BECu;
    // 0x128bf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x128BECu, 0x128BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BF4u;
label_128bf4:
    // 0x128bf4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x128bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x128bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128bfc: 0x0  nop
    ctx->pc = 0x128bfcu;
    // NOP
    // 0x128c00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x128c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128c04: 0x0  nop
    ctx->pc = 0x128c04u;
    // NOP
    // 0x128c08: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x128C08u;
    {
        const bool branch_taken_0x128c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x128C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C08u;
        // 0x128c0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c08) {
            ctx->pc = 0x128C38u;
            goto label_128c38;
        }
    }
    ctx->pc = 0x128C10u;
    // 0x128c10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128c14:
    // 0x128c14: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x128c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c1c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x128c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x128c20: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C20u;
    SET_GPR_U32(ctx, 31, 0x128C28u);
    ctx->pc = 0x128C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C20u;
    // 0x128c24: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C20u, 0x128C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C28u;
label_128c28:
    // 0x128c28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x128c2c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x128c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128c30: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x128C30u;
    {
        const bool branch_taken_0x128c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C30u;
        // 0x128c34: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c30) {
            ctx->pc = 0x128C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c14;
        }
    }
    ctx->pc = 0x128C38u;
label_128c38:
    // 0x128c38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x128c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_128c40:
    // 0x128c40: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x128c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x128c44: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c48: 0x24632df0  addiu       $v1, $v1, 0x2DF0
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11760));
    // 0x128c4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x128c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x128c50: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x128c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x128c54: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C54u;
    SET_GPR_U32(ctx, 31, 0x128C5Cu);
    ctx->pc = 0x128C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C54u;
    // 0x128c58: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C54u, 0x128C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C5Cu;
label_128c5c:
    // 0x128c5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c60: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x128c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x128c64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x128C64u;
    {
        const bool branch_taken_0x128c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128C64u;
        // 0x128c68: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c64) {
            ctx->pc = 0x128C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128c40;
        }
    }
    ctx->pc = 0x128C6Cu;
    // 0x128c6c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x128c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x128c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c74: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x128C74u;
    SET_GPR_U32(ctx, 31, 0x128C7Cu);
    ctx->pc = 0x128C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128C74u;
    // 0x128c78: 0x24842e80  addiu       $a0, $a0, 0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x128C74u, 0x128C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128C7Cu;
label_128c7c:
    // 0x128c7c: 0x27b1009c  addiu       $s1, $sp, 0x9C
    ctx->pc = 0x128c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x128c80: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x128c80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x128c84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x128c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x128c88: 0x27b70094  addiu       $s7, $sp, 0x94
    ctx->pc = 0x128c88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x128c8c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x128c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x128c90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x128c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c94: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x128c94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x128c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x128c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c9c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x128c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_128ca0:
    // 0x128ca0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x128ca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128ca8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x128cac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x128cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cb0: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x128CB0u;
    SET_GPR_U32(ctx, 31, 0x128CB8u);
    ctx->pc = 0x128CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CB0u;
    // 0x128cb4: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x128CB0u, 0x128CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CB8u;
label_128cb8:
    // 0x128cb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128cbc: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128cc0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x128CC0u;
    {
        const bool branch_taken_0x128cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CC0u;
        // 0x128cc4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cc0) {
            ctx->pc = 0x128CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128ca0;
        }
    }
    ctx->pc = 0x128CC8u;
    // 0x128cc8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x128cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ccc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x128cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x128cd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cdc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128cdcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128ce0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x128ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x128ce4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x128ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ce8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128ce8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128cec: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x128cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x128cf0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x128cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128cf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128cf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128cf8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x128cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x128cfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x128cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128d00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128d04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x128d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x128d08: 0x32a40008  andi        $a0, $s5, 0x8
    ctx->pc = 0x128d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x128d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128d10:
    // 0x128d10: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x128d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x128d14: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x128d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x128d18: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x128D18u;
    {
        const bool branch_taken_0x128d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D18u;
        // 0x128d1c: 0xdd1821  addu        $v1, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d18) {
            ctx->pc = 0x128D50u;
            goto label_128d50;
        }
    }
    ctx->pc = 0x128D20u;
    // 0x128d20: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128D20u;
    {
        const bool branch_taken_0x128d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D20u;
        // 0x128d24: 0xc4620090  lwc1        $f2, 0x90($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d20) {
            ctx->pc = 0x128D44u;
            goto label_128d44;
        }
    }
    ctx->pc = 0x128D28u;
    // 0x128d28: 0x2863821  addu        $a3, $s4, $a2
    ctx->pc = 0x128d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x128d2c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x128d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x128d30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x128d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d34: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x128d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128d38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128d38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128d3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x128d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x128d40: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x128d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_128d44:
    // 0x128d44: 0x0  nop
    ctx->pc = 0x128d44u;
    // NOP
    // 0x128d48: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x128d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x128d4c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x128d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_128d50:
    // 0x128d50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x128d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x128d54: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x128d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x128d58: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x128D58u;
    {
        const bool branch_taken_0x128d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D58u;
        // 0x128d5c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d58) {
            ctx->pc = 0x128D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128d10;
        }
    }
    ctx->pc = 0x128D60u;
    // 0x128d60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x128d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128d64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x128d64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128d68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x128d68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128d6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d84: 0x3e00008  jr          $ra
    ctx->pc = 0x128D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D84u;
        // 0x128d88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128D8Cu;
}
