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

// Function: FUN_0020b3d0
// Address: 0x20b3d0 - 0x20b608
void FUN_0020b3d0_0x20b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020b3d0_0x20b3d0");
#endif

    switch (ctx->pc) {
        case 0x20b3e0u: goto label_20b3e0;
        case 0x20b3f8u: goto label_20b3f8;
        case 0x20b428u: goto label_20b428;
        case 0x20b4b0u: goto label_20b4b0;
        case 0x20b4e8u: goto label_20b4e8;
        case 0x20b540u: goto label_20b540;
        case 0x20b578u: goto label_20b578;
        case 0x20b5b0u: goto label_20b5b0;
        case 0x20b5e0u: goto label_20b5e0;
        default: break;
    }

    ctx->pc = 0x20b3d0u;

    // 0x20b3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b3d8: 0xc082cd6  jal         func_20B358
    ctx->pc = 0x20B3D8u;
    SET_GPR_U32(ctx, 31, 0x20B3E0u);
    ctx->pc = 0x20B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B3D8u;
    // 0x20b3dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B358u, 0x20B3D8u, 0x20B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3E0u;
label_20b3e0:
    // 0x20b3e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b3e4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x20b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x20b3e8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x20b3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x20b3ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b3f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b3f0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x20b3f4: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_20b3f8:
    // 0x20b3f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b3fc: 0x0  nop
    ctx->pc = 0x20b3fcu;
    // NOP
    // 0x20b400: 0x0  nop
    ctx->pc = 0x20b400u;
    // NOP
    // 0x20b404: 0x0  nop
    ctx->pc = 0x20b404u;
    // NOP
    // 0x20b408: 0x0  nop
    ctx->pc = 0x20b408u;
    // NOP
    // 0x20b40c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B40Cu;
    {
        const bool branch_taken_0x20b40c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b40c) {
            ctx->pc = 0x20B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b3f8;
        }
    }
    ctx->pc = 0x20B414u;
    // 0x20b414: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b418: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b41c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b420: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b424: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20b424u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
label_20b428:
    // 0x20b428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b42c: 0x0  nop
    ctx->pc = 0x20b42cu;
    // NOP
    // 0x20b430: 0x0  nop
    ctx->pc = 0x20b430u;
    // NOP
    // 0x20b434: 0x0  nop
    ctx->pc = 0x20b434u;
    // NOP
    // 0x20b438: 0x0  nop
    ctx->pc = 0x20b438u;
    // NOP
    // 0x20b43c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B43Cu;
    {
        const bool branch_taken_0x20b43c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b43c) {
            ctx->pc = 0x20B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b428;
        }
    }
    ctx->pc = 0x20B444u;
    // 0x20b444: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x20b448: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b44c: 0x24a5deb0  addiu       $a1, $a1, -0x2150
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
    // 0x20b450: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x20b450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x20b454: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x20b454u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DEB0u));
    // 0x20b458: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x20b458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x20b45c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x20b460: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x20b460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x20b464: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b464u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b468: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x20b46c: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x20b46cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x20b470: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x20b470u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEC0u));
    // 0x20b474: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b474u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b478: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x20b478u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DED0u));
    // 0x20b47c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b47cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b480: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x20b480u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEE0u));
    // 0x20b484: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b484u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b488: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x20b488u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DEF0u));
    // 0x20b48c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b48cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b490: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x20b490u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEF0u));
    // 0x20b494: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b494u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b498: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x20b498u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DEF0u));
    // 0x20b49c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b49cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b4a0: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x20b4a0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x21DEF0u));
    // 0x20b4a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b4a4u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x20b4a8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x20b4a8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 7));
    // 0x20b4ac: 0x0  nop
    ctx->pc = 0x20b4acu;
    // NOP
label_20b4b0:
    // 0x20b4b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20b4b4: 0x0  nop
    ctx->pc = 0x20b4b4u;
    // NOP
    // 0x20b4b8: 0x0  nop
    ctx->pc = 0x20b4b8u;
    // NOP
    // 0x20b4bc: 0x0  nop
    ctx->pc = 0x20b4bcu;
    // NOP
    // 0x20b4c0: 0x0  nop
    ctx->pc = 0x20b4c0u;
    // NOP
    // 0x20b4c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B4C4u;
    {
        const bool branch_taken_0x20b4c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b4c4) {
            ctx->pc = 0x20B4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b4b0;
        }
    }
    ctx->pc = 0x20B4CCu;
    // 0x20b4cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b4d0: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x20b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x20b4d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b4d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b4dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b4dcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x20b4e0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b4e4: 0x0  nop
    ctx->pc = 0x20b4e4u;
    // NOP
label_20b4e8:
    // 0x20b4e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b4ec: 0x0  nop
    ctx->pc = 0x20b4ecu;
    // NOP
    // 0x20b4f0: 0x0  nop
    ctx->pc = 0x20b4f0u;
    // NOP
    // 0x20b4f4: 0x0  nop
    ctx->pc = 0x20b4f4u;
    // NOP
    // 0x20b4f8: 0x0  nop
    ctx->pc = 0x20b4f8u;
    // NOP
    // 0x20b4fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B4FCu;
    {
        const bool branch_taken_0x20b4fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b4fc) {
            ctx->pc = 0x20B4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b4e8;
        }
    }
    ctx->pc = 0x20B504u;
    // 0x20b504: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x20b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x20b508: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b50c: 0x2463df00  addiu       $v1, $v1, -0x2100
    ctx->pc = 0x20b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958848));
    // 0x20b510: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x20b510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x20b514: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x20b514u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DF00u));
    // 0x20b518: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x20b518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x20b51c: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x20b51cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x20b520: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x20b520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x20b524: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b524u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b528: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x20b52c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x20b52cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x20b530: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x20b530u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DF10u));
    // 0x20b534: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x20b534u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x20b538: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x20b538u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 6));
    // 0x20b53c: 0x0  nop
    ctx->pc = 0x20b53cu;
    // NOP
label_20b540:
    // 0x20b540: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20b544: 0x0  nop
    ctx->pc = 0x20b544u;
    // NOP
    // 0x20b548: 0x0  nop
    ctx->pc = 0x20b548u;
    // NOP
    // 0x20b54c: 0x0  nop
    ctx->pc = 0x20b54cu;
    // NOP
    // 0x20b550: 0x0  nop
    ctx->pc = 0x20b550u;
    // NOP
    // 0x20b554: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B554u;
    {
        const bool branch_taken_0x20b554 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b554) {
            ctx->pc = 0x20B540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b540;
        }
    }
    ctx->pc = 0x20B55Cu;
    // 0x20b55c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b560: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x20b560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x20b564: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b568: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b56c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b56cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x20b570: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b574: 0x0  nop
    ctx->pc = 0x20b574u;
    // NOP
label_20b578:
    // 0x20b578: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b57c: 0x0  nop
    ctx->pc = 0x20b57cu;
    // NOP
    // 0x20b580: 0x0  nop
    ctx->pc = 0x20b580u;
    // NOP
    // 0x20b584: 0x0  nop
    ctx->pc = 0x20b584u;
    // NOP
    // 0x20b588: 0x0  nop
    ctx->pc = 0x20b588u;
    // NOP
    // 0x20b58c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B58Cu;
    {
        const bool branch_taken_0x20b58c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b58c) {
            ctx->pc = 0x20B578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b578;
        }
    }
    ctx->pc = 0x20B594u;
    // 0x20b594: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b598: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x20b59c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x20b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x20b5a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b5a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b5a4u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x20b5a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b5ac: 0x0  nop
    ctx->pc = 0x20b5acu;
    // NOP
label_20b5b0:
    // 0x20b5b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b5b4: 0x0  nop
    ctx->pc = 0x20b5b4u;
    // NOP
    // 0x20b5b8: 0x0  nop
    ctx->pc = 0x20b5b8u;
    // NOP
    // 0x20b5bc: 0x0  nop
    ctx->pc = 0x20b5bcu;
    // NOP
    // 0x20b5c0: 0x0  nop
    ctx->pc = 0x20b5c0u;
    // NOP
    // 0x20b5c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B5C4u;
    {
        const bool branch_taken_0x20b5c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b5c4) {
            ctx->pc = 0x20B5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B5CCu;
    // 0x20b5cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b5d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b5d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b5d8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b5dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20b5dcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
label_20b5e0:
    // 0x20b5e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b5e4: 0x0  nop
    ctx->pc = 0x20b5e4u;
    // NOP
    // 0x20b5e8: 0x0  nop
    ctx->pc = 0x20b5e8u;
    // NOP
    // 0x20b5ec: 0x0  nop
    ctx->pc = 0x20b5ecu;
    // NOP
    // 0x20b5f0: 0x0  nop
    ctx->pc = 0x20b5f0u;
    // NOP
    // 0x20b5f4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B5F4u;
    {
        const bool branch_taken_0x20b5f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b5f4) {
            ctx->pc = 0x20B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b5e0;
        }
    }
    ctx->pc = 0x20B5FCu;
    // 0x20b5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b600: 0x3e00008  jr          $ra
    ctx->pc = 0x20B600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B600u;
        // 0x20b604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B608u;
}
