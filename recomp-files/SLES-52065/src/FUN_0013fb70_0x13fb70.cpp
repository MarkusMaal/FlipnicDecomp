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

// Function: FUN_0013fb70
// Address: 0x13fb70 - 0x13fd48
void FUN_0013fb70_0x13fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013fb70_0x13fb70");
#endif

    switch (ctx->pc) {
        case 0x13fb90u: goto label_13fb90;
        case 0x13fbb0u: goto label_13fbb0;
        case 0x13fbb8u: goto label_13fbb8;
        case 0x13fbd0u: goto label_13fbd0;
        case 0x13fbf0u: goto label_13fbf0;
        case 0x13fbf8u: goto label_13fbf8;
        case 0x13fcb4u: goto label_13fcb4;
        case 0x13fd24u: goto label_13fd24;
        default: break;
    }

    ctx->pc = 0x13fb70u;

    // 0x13fb70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13fb74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13fb78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13fb7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13fb80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13fb80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13fb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb88: 0xc0505b0  jal         func_1416C0
    ctx->pc = 0x13FB88u;
    SET_GPR_U32(ctx, 31, 0x13FB90u);
    ctx->pc = 0x13FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB88u;
    // 0x13fb8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1416C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416C0u, 0x13FB88u, 0x13FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB90u;
label_13fb90:
    // 0x13fb90: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x13fb90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13fb94: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FB94u;
    {
        const bool branch_taken_0x13fb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB94u;
        // 0x13fb98: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb94) {
            ctx->pc = 0x13FBB8u;
            goto label_13fbb8;
        }
    }
    ctx->pc = 0x13FB9Cu;
    // 0x13fb9c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13fba0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13fba4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13fba8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13FBA8u;
    SET_GPR_U32(ctx, 31, 0x13FBB0u);
    ctx->pc = 0x13FBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBA8u;
    // 0x13fbac: 0x24a5f0c0  addiu       $a1, $a1, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13FBA8u, 0x13FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBB0u;
label_13fbb0:
    // 0x13fbb0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13FBB0u;
    SET_GPR_U32(ctx, 31, 0x13FBB8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13FBB0u, 0x13FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBB8u;
label_13fbb8:
    // 0x13fbb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13fbbc: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x13fbbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13fbc0: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x13FBC0u;
    {
        const bool branch_taken_0x13fbc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBC0u;
        // 0x13fbc4: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbc0) {
            ctx->pc = 0x13FD30u;
            goto label_13fd30;
        }
    }
    ctx->pc = 0x13FBC8u;
    // 0x13fbc8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13FBC8u;
    SET_GPR_U32(ctx, 31, 0x13FBD0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13FBC8u, 0x13FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBD0u;
label_13fbd0:
    // 0x13fbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13fbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbd4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FBD4u;
    {
        const bool branch_taken_0x13fbd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FBD4u;
        // 0x13fbd8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fbd4) {
            ctx->pc = 0x13FBF8u;
            goto label_13fbf8;
        }
    }
    ctx->pc = 0x13FBDCu;
    // 0x13fbdc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13fbe0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13fbe4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13fbe8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13FBE8u;
    SET_GPR_U32(ctx, 31, 0x13FBF0u);
    ctx->pc = 0x13FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FBE8u;
    // 0x13fbec: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13FBE8u, 0x13FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBF0u;
label_13fbf0:
    // 0x13fbf0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13FBF0u;
    SET_GPR_U32(ctx, 31, 0x13FBF8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13FBF0u, 0x13FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FBF8u;
label_13fbf8:
    // 0x13fbf8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13fbfc: 0x10a00049  beqz        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x13FBFCu;
    {
        const bool branch_taken_0x13fbfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fbfc) {
            ctx->pc = 0x13FD24u;
            goto label_13fd24;
        }
    }
    ctx->pc = 0x13FC04u;
    // 0x13fc04: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x13fc04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13fc08: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fc0c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13fc10: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13fc14: 0x87082b  sltu        $at, $a0, $a3
    ctx->pc = 0x13fc14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13fc18: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FC18u;
    {
        const bool branch_taken_0x13fc18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC18u;
        // 0x13fc1c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc18) {
            ctx->pc = 0x13FC3Cu;
            goto label_13fc3c;
        }
    }
    ctx->pc = 0x13FC20u;
    // 0x13fc20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13fc24: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x13fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x13fc28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13fc2c: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x13fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x13fc30: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x13fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x13fc34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13FC34u;
    {
        const bool branch_taken_0x13fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC34u;
        // 0x13fc38: 0x27ab0050  addiu       $t3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc34) {
            ctx->pc = 0x13FC58u;
            goto label_13fc58;
        }
    }
    ctx->pc = 0x13FC3Cu;
label_13fc3c:
    // 0x13fc3c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x13fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13fc40: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x13fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x13fc44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13fc48: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x13fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x13fc4c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13fc50: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x13fc50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13fc54: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x13fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_13fc58:
    // 0x13fc58: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x13fc58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fc5c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x13fc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13fc60: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x13fc60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13fc64: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13fc68: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fc6c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x13fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x13fc70: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x13fc74: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x13fc78: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x13fc7c: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x13fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
    // 0x13fc80: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x13fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x13fc84: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x13fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x13fc88: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x13fc88u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fc8c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x13fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fc90: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x13fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x13fc94: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x13fc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x13fc98: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x13fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13fc9c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x13fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fca0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x13fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fca4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x13fca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13fca8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x13fca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x13fcac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13FCACu;
    {
        const bool branch_taken_0x13fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCACu;
        // 0x13fcb0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcac) {
            ctx->pc = 0x13FCFCu;
            goto label_13fcfc;
        }
    }
    ctx->pc = 0x13FCB4u;
label_13fcb4:
    // 0x13fcb4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fcb8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13fcbc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13fcc0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x13fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fcc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13fcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13fcc8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x13fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x13fccc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x13fcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fcd0: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13fcd4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x13fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x13fcd8: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13fcdc: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x13fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fce0: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13fce4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13fce4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13fce8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x13fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x13fcec: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13FCECu;
    {
        const bool branch_taken_0x13fcec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fcec) {
            ctx->pc = 0x13FCF8u;
            goto label_13fcf8;
        }
    }
    ctx->pc = 0x13FCF4u;
    // 0x13fcf4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x13fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_13fcf8:
    // 0x13fcf8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x13fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_13fcfc:
    // 0x13fcfc: 0x0  nop
    ctx->pc = 0x13fcfcu;
    // NOP
    // 0x13fd00: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fd04: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x13fd08: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13FD08u;
    {
        const bool branch_taken_0x13fd08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x13fd08) {
            ctx->pc = 0x13FCB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13fcb4;
        }
    }
    ctx->pc = 0x13FD10u;
    // 0x13fd10: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x13fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13fd14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FD14u;
    {
        const bool branch_taken_0x13fd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd14) {
            ctx->pc = 0x13FD24u;
            goto label_13fd24;
        }
    }
    ctx->pc = 0x13FD1Cu;
    // 0x13fd1c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13FD1Cu;
    SET_GPR_U32(ctx, 31, 0x13FD24u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13FD1Cu, 0x13FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD24u;
label_13fd24:
    // 0x13fd24: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x13fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x13fd28: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x13fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x13fd2c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x13fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_13fd30:
    // 0x13fd30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13fd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fd34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13fd34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fd40: 0x3e00008  jr          $ra
    ctx->pc = 0x13FD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD40u;
        // 0x13fd44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FD48u;
}
