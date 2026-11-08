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

// Function: entry_001a87e0
// Address: 0x1a87e0 - 0x1a88f4
void entry_001a87e0_0x1a87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a87e0_0x1a87e0");
#endif

    switch (ctx->pc) {
        case 0x1a8870u: goto label_1a8870;
        default: break;
    }

    ctx->pc = 0x1a87e0u;

    // 0x1a87e0: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a87e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a87e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a87e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a87ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a87f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a87f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a87f8: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1a87f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a87fc: 0x8c8606d0  lw          $a2, 0x6D0($a0)
    ctx->pc = 0x1a87fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    // 0x1a8800: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1a8800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8804: 0x68900  sll         $s1, $a2, 4
    ctx->pc = 0x1a8804u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1a8808: 0xac8306d0  sw          $v1, 0x6D0($a0)
    ctx->pc = 0x1a8808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1744), GPR_U32(ctx, 3));
    // 0x1a880c: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8810: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a8810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a8814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8820: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8824: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a8828: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a882c: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1a882cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    // 0x1a8830: 0xac600678  sw          $zero, 0x678($v1)
    ctx->pc = 0x1a8830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1656), GPR_U32(ctx, 0));
    // 0x1a8834: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8838: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a883c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a883cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a8840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8844: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8848: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a884c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a884cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8850: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a8854: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a8858: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1a885c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8864: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a8868: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1A8868u;
    SET_GPR_U32(ctx, 31, 0x1A8870u);
    ctx->pc = 0x1A886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8868u;
    // 0x1a886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1A8868u, 0x1A8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8870u;
label_1a8870:
    // 0x1a8870: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a8870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8878: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a887c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a887cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a8880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a8884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a888c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a8890: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a8890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a8894: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a8894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a8898: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1a889c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a889cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a88a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a88a4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a88a8: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x1a88a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a88ac: 0x8e8609b4  lw          $a2, 0x9B4($s4)
    ctx->pc = 0x1a88acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a88b0: 0x8e8409b0  lw          $a0, 0x9B0($s4)
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a88b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a88b8: 0x38c30002  xori        $v1, $a2, 0x2
    ctx->pc = 0x1a88b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x1a88bc: 0x3902b  sltu        $s2, $zero, $v1
    ctx->pc = 0x1a88bcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a88c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a88c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a88c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a88cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a88d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a88d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a88d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a88dc: 0x8c630670  lw          $v1, 0x670($v1)
    ctx->pc = 0x1a88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1a88e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a88e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a88e8: 0x14c50002  bne         $a2, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A88E8u;
    {
        const bool branch_taken_0x1a88e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88E8u;
        // 0x1a88ec: 0x8c512cd8  lw          $s1, 0x2CD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88e8) {
            ctx->pc = 0x1A88F4u;
            return;
        }
    }
    ctx->pc = 0x1A88F0u;
    // 0x1a88f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a88f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a88f4u;
}
