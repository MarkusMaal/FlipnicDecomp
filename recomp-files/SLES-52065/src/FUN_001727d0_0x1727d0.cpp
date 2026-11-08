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

// Function: FUN_001727d0
// Address: 0x1727d0 - 0x17290c
void FUN_001727d0_0x1727d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001727d0_0x1727d0");
#endif

    switch (ctx->pc) {
        case 0x1727d0u: goto label_1727d0;
        case 0x1727d4u: goto label_1727d4;
        case 0x1727d8u: goto label_1727d8;
        case 0x1727dcu: goto label_1727dc;
        case 0x1727e0u: goto label_1727e0;
        case 0x1727e4u: goto label_1727e4;
        case 0x1727e8u: goto label_1727e8;
        case 0x1727ecu: goto label_1727ec;
        case 0x1727f0u: goto label_1727f0;
        case 0x1727f4u: goto label_1727f4;
        case 0x1727f8u: goto label_1727f8;
        case 0x1727fcu: goto label_1727fc;
        case 0x172800u: goto label_172800;
        case 0x172804u: goto label_172804;
        case 0x172808u: goto label_172808;
        case 0x17280cu: goto label_17280c;
        case 0x172810u: goto label_172810;
        case 0x172814u: goto label_172814;
        case 0x172818u: goto label_172818;
        case 0x17281cu: goto label_17281c;
        case 0x172820u: goto label_172820;
        case 0x172824u: goto label_172824;
        case 0x172828u: goto label_172828;
        case 0x17282cu: goto label_17282c;
        case 0x172830u: goto label_172830;
        case 0x172834u: goto label_172834;
        case 0x172838u: goto label_172838;
        case 0x17283cu: goto label_17283c;
        case 0x172840u: goto label_172840;
        case 0x172844u: goto label_172844;
        case 0x172848u: goto label_172848;
        case 0x17284cu: goto label_17284c;
        case 0x172850u: goto label_172850;
        case 0x172854u: goto label_172854;
        case 0x172858u: goto label_172858;
        case 0x17285cu: goto label_17285c;
        case 0x172860u: goto label_172860;
        case 0x172864u: goto label_172864;
        case 0x172868u: goto label_172868;
        case 0x17286cu: goto label_17286c;
        case 0x172870u: goto label_172870;
        case 0x172874u: goto label_172874;
        case 0x172878u: goto label_172878;
        case 0x17287cu: goto label_17287c;
        case 0x172880u: goto label_172880;
        case 0x172884u: goto label_172884;
        case 0x172888u: goto label_172888;
        case 0x17288cu: goto label_17288c;
        case 0x172890u: goto label_172890;
        case 0x172894u: goto label_172894;
        case 0x172898u: goto label_172898;
        case 0x17289cu: goto label_17289c;
        case 0x1728a0u: goto label_1728a0;
        case 0x1728a4u: goto label_1728a4;
        case 0x1728a8u: goto label_1728a8;
        case 0x1728acu: goto label_1728ac;
        case 0x1728b0u: goto label_1728b0;
        case 0x1728b4u: goto label_1728b4;
        case 0x1728b8u: goto label_1728b8;
        case 0x1728bcu: goto label_1728bc;
        case 0x1728c0u: goto label_1728c0;
        case 0x1728c4u: goto label_1728c4;
        case 0x1728c8u: goto label_1728c8;
        case 0x1728ccu: goto label_1728cc;
        case 0x1728d0u: goto label_1728d0;
        case 0x1728d4u: goto label_1728d4;
        case 0x1728d8u: goto label_1728d8;
        case 0x1728dcu: goto label_1728dc;
        case 0x1728e0u: goto label_1728e0;
        case 0x1728e4u: goto label_1728e4;
        case 0x1728e8u: goto label_1728e8;
        case 0x1728ecu: goto label_1728ec;
        case 0x1728f0u: goto label_1728f0;
        case 0x1728f4u: goto label_1728f4;
        case 0x1728f8u: goto label_1728f8;
        case 0x1728fcu: goto label_1728fc;
        case 0x172900u: goto label_172900;
        case 0x172904u: goto label_172904;
        case 0x172908u: goto label_172908;
        default: break;
    }

    ctx->pc = 0x1727d0u;

label_1727d0:
    // 0x1727d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1727d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1727d4:
    // 0x1727d4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1727d8:
    // 0x1727d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1727d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1727dc:
    // 0x1727dc: 0x24c6f550  addiu       $a2, $a2, -0xAB0
    ctx->pc = 0x1727dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964560));
label_1727e0:
    // 0x1727e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1727e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1727e4:
    // 0x1727e4: 0x8c83601c  lw          $v1, 0x601C($a0)
    ctx->pc = 0x1727e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24604)));
label_1727e8:
    // 0x1727e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1727e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1727ec:
    // 0x1727ec: 0x8c87602c  lw          $a3, 0x602C($a0)
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24620)));
label_1727f0:
    // 0x1727f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1727f4:
    // 0x1727f4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1727f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1727f8:
    // 0x1727f8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1727f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1727fc:
    // 0x1727fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1727fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_172800:
    // 0x172800: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_172804:
    // 0x172804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x172804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_172808:
    // 0x172808: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x172808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17280c:
    // 0x17280c: 0x20630001  addi        $v1, $v1, 0x1
    ctx->pc = 0x17280cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_172810:
    // 0x172810: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x172810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_172814:
    // 0x172814: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_172818:
    if (ctx->pc == 0x172818u) {
        ctx->pc = 0x17281Cu;
        goto label_17281c;
    }
    ctx->pc = 0x172814u;
    {
        const bool branch_taken_0x172814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172814) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x17281Cu;
label_17281c:
    // 0x17281c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17281cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_172820:
    // 0x172820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x172820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_172824:
    // 0x172824: 0x2484f5d0  addiu       $a0, $a0, -0xA30
    ctx->pc = 0x172824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964688));
label_172828:
    // 0x172828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x172828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17282c:
    // 0x17282c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_172830:
    // 0x172830: 0x600008  jr          $v1
label_172834:
    if (ctx->pc == 0x172834u) {
        ctx->pc = 0x172838u;
        goto label_172838;
    }
    ctx->pc = 0x172830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172838u: goto label_172838;
            case 0x172844u: goto label_172844;
            case 0x172850u: goto label_172850;
            case 0x17285Cu: goto label_17285c;
            case 0x172868u: goto label_172868;
            case 0x172874u: goto label_172874;
            case 0x172880u: goto label_172880;
            case 0x17288Cu: goto label_17288c;
            case 0x172898u: goto label_172898;
            case 0x1728A4u: goto label_1728a4;
            case 0x1728ACu: goto label_1728ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x172838u;
label_172838:
    // 0x172838: 0x260314d0  addiu       $v1, $s0, 0x14D0
    ctx->pc = 0x172838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5328));
label_17283c:
    // 0x17283c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_172840:
    if (ctx->pc == 0x172840u) {
        ctx->pc = 0x172840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17283Cu;
        // 0x172840: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172844u;
        goto label_172844;
    }
    ctx->pc = 0x17283Cu;
    {
        const bool branch_taken_0x17283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17283Cu;
        // 0x172840: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17283c) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172844u;
label_172844:
    // 0x172844: 0x260324d0  addiu       $v1, $s0, 0x24D0
    ctx->pc = 0x172844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9424));
label_172848:
    // 0x172848: 0x10000018  b           . + 4 + (0x18 << 2)
label_17284c:
    if (ctx->pc == 0x17284Cu) {
        ctx->pc = 0x17284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172848u;
        // 0x17284c: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172850u;
        goto label_172850;
    }
    ctx->pc = 0x172848u;
    {
        const bool branch_taken_0x172848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172848u;
        // 0x17284c: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172848) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172850u;
label_172850:
    // 0x172850: 0x26031740  addiu       $v1, $s0, 0x1740
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
label_172854:
    // 0x172854: 0x10000015  b           . + 4 + (0x15 << 2)
label_172858:
    if (ctx->pc == 0x172858u) {
        ctx->pc = 0x172858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172854u;
        // 0x172858: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17285Cu;
        goto label_17285c;
    }
    ctx->pc = 0x172854u;
    {
        const bool branch_taken_0x172854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172854u;
        // 0x172858: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172854) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x17285Cu;
label_17285c:
    // 0x17285c: 0x26031510  addiu       $v1, $s0, 0x1510
    ctx->pc = 0x17285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
label_172860:
    // 0x172860: 0x10000012  b           . + 4 + (0x12 << 2)
label_172864:
    if (ctx->pc == 0x172864u) {
        ctx->pc = 0x172864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172860u;
        // 0x172864: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172868u;
        goto label_172868;
    }
    ctx->pc = 0x172860u;
    {
        const bool branch_taken_0x172860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172860u;
        // 0x172864: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172860) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172868u;
label_172868:
    // 0x172868: 0x26031620  addiu       $v1, $s0, 0x1620
    ctx->pc = 0x172868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5664));
label_17286c:
    // 0x17286c: 0x1000000f  b           . + 4 + (0xF << 2)
label_172870:
    if (ctx->pc == 0x172870u) {
        ctx->pc = 0x172870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17286Cu;
        // 0x172870: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172874u;
        goto label_172874;
    }
    ctx->pc = 0x17286Cu;
    {
        const bool branch_taken_0x17286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17286Cu;
        // 0x172870: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17286c) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172874u;
label_172874:
    // 0x172874: 0x26032370  addiu       $v1, $s0, 0x2370
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9072));
label_172878:
    // 0x172878: 0x1000000c  b           . + 4 + (0xC << 2)
label_17287c:
    if (ctx->pc == 0x17287Cu) {
        ctx->pc = 0x17287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172878u;
        // 0x17287c: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172880u;
        goto label_172880;
    }
    ctx->pc = 0x172878u;
    {
        const bool branch_taken_0x172878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172878u;
        // 0x17287c: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172878) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172880u;
label_172880:
    // 0x172880: 0x26032510  addiu       $v1, $s0, 0x2510
    ctx->pc = 0x172880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9488));
label_172884:
    // 0x172884: 0x10000009  b           . + 4 + (0x9 << 2)
label_172888:
    if (ctx->pc == 0x172888u) {
        ctx->pc = 0x172888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172884u;
        // 0x172888: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17288Cu;
        goto label_17288c;
    }
    ctx->pc = 0x172884u;
    {
        const bool branch_taken_0x172884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172884u;
        // 0x172888: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172884) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x17288Cu;
label_17288c:
    // 0x17288c: 0x26032570  addiu       $v1, $s0, 0x2570
    ctx->pc = 0x17288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9584));
label_172890:
    // 0x172890: 0x10000006  b           . + 4 + (0x6 << 2)
label_172894:
    if (ctx->pc == 0x172894u) {
        ctx->pc = 0x172894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172890u;
        // 0x172894: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172898u;
        goto label_172898;
    }
    ctx->pc = 0x172890u;
    {
        const bool branch_taken_0x172890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172890u;
        // 0x172894: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172890) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172898u;
label_172898:
    // 0x172898: 0x26032710  addiu       $v1, $s0, 0x2710
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10000));
label_17289c:
    // 0x17289c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1728a0:
    if (ctx->pc == 0x1728A0u) {
        ctx->pc = 0x1728A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17289Cu;
        // 0x1728a0: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728A4u;
        goto label_1728a4;
    }
    ctx->pc = 0x17289Cu;
    {
        const bool branch_taken_0x17289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17289Cu;
        // 0x1728a0: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17289c) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x1728A4u;
label_1728a4:
    // 0x1728a4: 0x26032b70  addiu       $v1, $s0, 0x2B70
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
label_1728a8:
    // 0x1728a8: 0xae034020  sw          $v1, 0x4020($s0)
    ctx->pc = 0x1728a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
label_1728ac:
    // 0x1728ac: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_1728b0:
    if (ctx->pc == 0x1728B0u) {
        ctx->pc = 0x1728B4u;
        goto label_1728b4;
    }
    ctx->pc = 0x1728ACu;
    {
        const bool branch_taken_0x1728ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728ac) {
            ctx->pc = 0x1728F0u;
            goto label_1728f0;
        }
    }
    ctx->pc = 0x1728B4u;
label_1728b4:
    // 0x1728b4: 0x8e044020  lw          $a0, 0x4020($s0)
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16416)));
label_1728b8:
    // 0x1728b8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1728bc:
    // 0x1728bc: 0x8e06602c  lw          $a2, 0x602C($s0)
    ctx->pc = 0x1728bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24620)));
label_1728c0:
    // 0x1728c0: 0x2463f554  addiu       $v1, $v1, -0xAAC
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964564));
label_1728c4:
    // 0x1728c4: 0x8e02601c  lw          $v0, 0x601C($s0)
    ctx->pc = 0x1728c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24604)));
label_1728c8:
    // 0x1728c8: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x1728c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1728cc:
    // 0x1728cc: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1728ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1728d0:
    // 0x1728d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1728d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1728d4:
    // 0x1728d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1728d8:
    // 0x1728d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1728d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1728dc:
    // 0x1728dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1728dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1728e0:
    // 0x1728e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1728e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1728e4:
    // 0x1728e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1728e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1728e8:
    // 0x1728e8: 0x320f809  jalr        $t9
label_1728ec:
    if (ctx->pc == 0x1728ECu) {
        ctx->pc = 0x1728ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728E8u;
        // 0x1728ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728F0u;
        goto label_1728f0;
    }
    ctx->pc = 0x1728E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1728F0u);
        ctx->pc = 0x1728ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728E8u;
        // 0x1728ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1728E8u, 0x1728F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1728F0u;
label_1728f0:
    // 0x1728f0: 0x8e03601c  lw          $v1, 0x601C($s0)
    ctx->pc = 0x1728f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24604)));
label_1728f4:
    // 0x1728f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1728f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1728f8:
    // 0x1728f8: 0xae03601c  sw          $v1, 0x601C($s0)
    ctx->pc = 0x1728f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24604), GPR_U32(ctx, 3));
label_1728fc:
    // 0x1728fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1728fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172900:
    // 0x172900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172904:
    // 0x172904: 0x3e00008  jr          $ra
label_172908:
    if (ctx->pc == 0x172908u) {
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17290Cu;
        goto label_fallthrough_0x172904;
    }
    ctx->pc = 0x172904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x172904:
    ctx->pc = 0x17290Cu;
}
