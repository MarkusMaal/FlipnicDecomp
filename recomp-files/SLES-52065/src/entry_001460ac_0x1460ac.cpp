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

// Function: entry_001460ac
// Address: 0x1460ac - 0x1461b8
void entry_001460ac_0x1460ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001460ac_0x1460ac");
#endif

    switch (ctx->pc) {
        case 0x1460d8u: goto label_1460d8;
        case 0x146130u: goto label_146130;
        case 0x146144u: goto label_146144;
        case 0x146158u: goto label_146158;
        case 0x14616cu: goto label_14616c;
        case 0x146180u: goto label_146180;
        default: break;
    }

    ctx->pc = 0x1460acu;

label_1460ac:
    // 0x1460ac: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1460acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1460b0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1460b4: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1460b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1460b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1460bc: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x1460bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1460c0: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x1460c0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1460c4: 0x0  nop
    ctx->pc = 0x1460c4u;
    // NOP
    // 0x1460c8: 0x0  nop
    ctx->pc = 0x1460c8u;
    // NOP
    // 0x1460cc: 0x2812  mflo        $a1
    ctx->pc = 0x1460ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1460d0: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x1460D0u;
    SET_GPR_U32(ctx, 31, 0x1460D8u);
    ctx->pc = 0x1460D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460D0u;
    // 0x1460d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x1460D0u, 0x1460D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460D8u;
label_1460d8:
    // 0x1460d8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1460d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1460dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1460dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1460e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1460e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1460e4: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1460e8: 0x2e020032  sltiu       $v0, $s0, 0x32
    ctx->pc = 0x1460e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x1460ec: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x1460ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1460f0: 0x0  nop
    ctx->pc = 0x1460f0u;
    // NOP
    // 0x1460f4: 0x0  nop
    ctx->pc = 0x1460f4u;
    // NOP
    // 0x1460f8: 0x2010  mfhi        $a0
    ctx->pc = 0x1460f8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1460fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x146100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146104: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x146104u;
    {
        const bool branch_taken_0x146104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146104u;
        // 0x146108: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146104) {
            ctx->pc = 0x1460ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1460ac;
        }
    }
    ctx->pc = 0x14610Cu;
    // 0x14610c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146110: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x146110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x146114: 0x34443880  ori         $a0, $v0, 0x3880
    ctx->pc = 0x146114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14464);
    // 0x146118: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x146118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x14611c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146120: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x146120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x146124: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146128: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146128u;
    SET_GPR_U32(ctx, 31, 0x146130u);
    ctx->pc = 0x14612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146128u;
    // 0x14612c: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146128u, 0x146130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146130u;
label_146130:
    // 0x146130: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x146130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146134: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146138: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x146138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x14613c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x14613Cu;
    SET_GPR_U32(ctx, 31, 0x146144u);
    ctx->pc = 0x146140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14613Cu;
    // 0x146140: 0xaca203c4  sw          $v0, 0x3C4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x14613Cu, 0x146144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146144u;
label_146144:
    // 0x146144: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x146144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146148: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14614c: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x14614cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x146150: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146150u;
    SET_GPR_U32(ctx, 31, 0x146158u);
    ctx->pc = 0x146154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146150u;
    // 0x146154: 0xaca203c8  sw          $v0, 0x3C8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146150u, 0x146158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146158u;
label_146158:
    // 0x146158: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x146158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x14615c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146160: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x146160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x146164: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146164u;
    SET_GPR_U32(ctx, 31, 0x14616Cu);
    ctx->pc = 0x146168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146164u;
    // 0x146168: 0xaca203cc  sw          $v0, 0x3CC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 972), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146164u, 0x14616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14616Cu;
label_14616c:
    // 0x14616c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146170: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146174: 0x34643880  ori         $a0, $v1, 0x3880
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14464);
    // 0x146178: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146178u;
    SET_GPR_U32(ctx, 31, 0x146180u);
    ctx->pc = 0x14617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146178u;
    // 0x14617c: 0xaca203d0  sw          $v0, 0x3D0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146178u, 0x146180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x146184: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x146184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x146188: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x14618c: 0x24c60ef0  addiu       $a2, $a2, 0xEF0
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3824));
    // 0x146190: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146194: 0x24840f00  addiu       $a0, $a0, 0xF00
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3840));
    // 0x146198: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x146198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14619c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14619cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1461a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461a4: 0xace202b0  sw          $v0, 0x2B0($a3)
    ctx->pc = 0x1461a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 688), GPR_U32(ctx, 2));
    // 0x1461a8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1461a8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210EF0u));
    // 0x1461ac: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1461acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1461b0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1461b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210F00u));
    // 0x1461b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1461b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1461b8u;
}
