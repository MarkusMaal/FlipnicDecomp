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

// Function: FUN_001080e0
// Address: 0x1080e0 - 0x108230
void FUN_001080e0_0x1080e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001080e0_0x1080e0");
#endif

    switch (ctx->pc) {
        case 0x1080fcu: goto label_1080fc;
        case 0x108154u: goto label_108154;
        case 0x108188u: goto label_108188;
        case 0x108204u: goto label_108204;
        default: break;
    }

    ctx->pc = 0x1080e0u;

    // 0x1080e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1080e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1080e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1080e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1080e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1080ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1080ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1080f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1080f4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1080f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1080f8: 0x24a5fd90  addiu       $a1, $a1, -0x270
    ctx->pc = 0x1080f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966672));
label_1080fc:
    // 0x1080fc: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1080fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x108100: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x108100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x108104: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x108104u;
    {
        const bool branch_taken_0x108104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108104) {
            ctx->pc = 0x108168u;
            goto label_108168;
        }
    }
    ctx->pc = 0x10810Cu;
    // 0x10810c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x10810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x108110: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x108110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108114: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x108114u;
    {
        const bool branch_taken_0x108114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108114) {
            ctx->pc = 0x108168u;
            goto label_108168;
        }
    }
    ctx->pc = 0x10811Cu;
    // 0x10811c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x108120: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108124: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x108124u;
    {
        const bool branch_taken_0x108124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108124u;
        // 0x108128: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108124) {
            ctx->pc = 0x108168u;
            goto label_108168;
        }
    }
    ctx->pc = 0x10812Cu;
    // 0x10812c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x10812cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x108130: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x108130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x108134: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x108134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x108138: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x108138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10813c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x10813cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x108140: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x108144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x108148: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x108148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x10814c: 0xc041ddc  jal         func_107770
    ctx->pc = 0x10814Cu;
    SET_GPR_U32(ctx, 31, 0x108154u);
    ctx->pc = 0x108150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10814Cu;
    // 0x108150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x10814Cu, 0x108154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108154u;
label_108154:
    // 0x108154: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10815c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x108160: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x108160u;
    {
        const bool branch_taken_0x108160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108160u;
        // 0x108164: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108160) {
            ctx->pc = 0x108220u;
            goto label_108220;
        }
    }
    ctx->pc = 0x108168u;
label_108168:
    // 0x108168: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10816c: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x10816cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x108170: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x108170u;
    {
        const bool branch_taken_0x108170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108170u;
        // 0x108174: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108170) {
            ctx->pc = 0x1080FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1080fc;
        }
    }
    ctx->pc = 0x108178u;
    // 0x108178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x108178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10817c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108180: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x108180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x108184: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x108184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
label_108188:
    // 0x108188: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x108188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10818c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108190: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x108190u;
    {
        const bool branch_taken_0x108190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108190u;
        // 0x108194: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108190) {
            ctx->pc = 0x10820Cu;
            goto label_10820c;
        }
    }
    ctx->pc = 0x108198u;
    // 0x108198: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x108198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10819c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1081a4: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1081a8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1081a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1081ac: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1081b0: 0x2442fd94  addiu       $v0, $v0, -0x26C
    ctx->pc = 0x1081b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966676));
    // 0x1081b4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1081b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1081b8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1081b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081bc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1081bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1081c0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1081c4: 0x2442fd98  addiu       $v0, $v0, -0x268
    ctx->pc = 0x1081c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966680));
    // 0x1081c8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1081c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1081cc: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x1081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081d0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1081d4: 0x2442fda4  addiu       $v0, $v0, -0x25C
    ctx->pc = 0x1081d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966692));
    // 0x1081d8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1081d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1081dc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1081e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1081e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1081e4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1081e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1081e8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1081e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1081ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1081ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1081f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1081f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1081f4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1081f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1081fc: 0xc041ddc  jal         func_107770
    ctx->pc = 0x1081FCu;
    SET_GPR_U32(ctx, 31, 0x108204u);
    ctx->pc = 0x108200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1081FCu;
    // 0x108200: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x1081FCu, 0x108204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108204u;
label_108204:
    // 0x108204: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108204u;
    {
        const bool branch_taken_0x108204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108204u;
        // 0x108208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108204) {
            ctx->pc = 0x108220u;
            goto label_108220;
        }
    }
    ctx->pc = 0x10820Cu;
label_10820c:
    // 0x10820c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10820cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x108210: 0x28e20018  slti        $v0, $a3, 0x18
    ctx->pc = 0x108210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x108214: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x108214u;
    {
        const bool branch_taken_0x108214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108214u;
        // 0x108218: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108214) {
            ctx->pc = 0x108188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108188;
        }
    }
    ctx->pc = 0x10821Cu;
    // 0x10821c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10821cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_108220:
    // 0x108220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108228: 0x3e00008  jr          $ra
    ctx->pc = 0x108228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108228u;
        // 0x10822c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108230u;
}
