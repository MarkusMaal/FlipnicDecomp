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

// Function: entry_0019c8e4
// Address: 0x19c8e4 - 0x19c9a8
void entry_0019c8e4_0x19c8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8e4_0x19c8e4");
#endif

    switch (ctx->pc) {
        case 0x19c908u: goto label_19c908;
        case 0x19c918u: goto label_19c918;
        case 0x19c930u: goto label_19c930;
        case 0x19c944u: goto label_19c944;
        case 0x19c954u: goto label_19c954;
        case 0x19c960u: goto label_19c960;
        case 0x19c96cu: goto label_19c96c;
        default: break;
    }

    ctx->pc = 0x19c8e4u;

label_19c8e4:
    // 0x19c8e4: 0xae40068c  sw          $zero, 0x68C($s2)
    ctx->pc = 0x19c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
label_19c8e8:
    // 0x19c8e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c8ec:
    // 0x19c8ec: 0xae460688  sw          $a2, 0x688($s2)
    ctx->pc = 0x19c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1672), GPR_U32(ctx, 6));
label_19c8f0:
    // 0x19c8f0: 0xae400690  sw          $zero, 0x690($s2)
    ctx->pc = 0x19c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 0));
label_19c8f4:
    // 0x19c8f4: 0xae400694  sw          $zero, 0x694($s2)
    ctx->pc = 0x19c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 0));
label_19c8f8:
    // 0x19c8f8: 0xae450698  sw          $a1, 0x698($s2)
    ctx->pc = 0x19c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 5));
label_19c8fc:
    // 0x19c8fc: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c900:
    // 0x19c900: 0xc064c20  jal         func_193080
label_19c904:
    if (ctx->pc == 0x19C904u) {
        ctx->pc = 0x19C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C900u;
        // 0x19c904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C908u;
        goto label_19c908;
    }
    ctx->pc = 0x19C900u;
    SET_GPR_U32(ctx, 31, 0x19C908u);
    ctx->pc = 0x19C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C900u;
    // 0x19c904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19C900u, 0x19C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C908u;
label_19c908:
    // 0x19c908: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c90c:
    // 0x19c90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c910:
    // 0x19c910: 0xc064c4c  jal         func_193130
label_19c914:
    if (ctx->pc == 0x19C914u) {
        ctx->pc = 0x19C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C910u;
        // 0x19c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C918u;
        goto label_19c918;
    }
    ctx->pc = 0x19C910u;
    SET_GPR_U32(ctx, 31, 0x19C918u);
    ctx->pc = 0x19C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C910u;
    // 0x19c914: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19C910u, 0x19C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C918u;
label_19c918:
    // 0x19c918: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c91c:
    // 0x19c91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c920:
    // 0x19c920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c924:
    // 0x19c924: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_19c928:
    // 0x19c928: 0x320f809  jalr        $t9
label_19c92c:
    if (ctx->pc == 0x19C92Cu) {
        ctx->pc = 0x19C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C928u;
        // 0x19c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C930u;
        goto label_19c930;
    }
    ctx->pc = 0x19C928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C930u);
        ctx->pc = 0x19C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C928u;
        // 0x19c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C928u, 0x19C930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C930u;
label_19c930:
    // 0x19c930: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c934:
    // 0x19c934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c938:
    // 0x19c938: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19c93c:
    // 0x19c93c: 0x320f809  jalr        $t9
label_19c940:
    if (ctx->pc == 0x19C940u) {
        ctx->pc = 0x19C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C93Cu;
        // 0x19c940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C944u;
        goto label_19c944;
    }
    ctx->pc = 0x19C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C944u);
        ctx->pc = 0x19C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C93Cu;
        // 0x19c940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C93Cu, 0x19C944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C944u;
label_19c944:
    // 0x19c944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19c948:
    // 0x19c948: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c94c:
    // 0x19c94c: 0xc04c72c  jal         func_131CB0
label_19c950:
    if (ctx->pc == 0x19C950u) {
        ctx->pc = 0x19C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C94Cu;
        // 0x19c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C954u;
        goto label_19c954;
    }
    ctx->pc = 0x19C94Cu;
    SET_GPR_U32(ctx, 31, 0x19C954u);
    ctx->pc = 0x19C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C94Cu;
    // 0x19c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x19C94Cu, 0x19C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C954u;
label_19c954:
    // 0x19c954: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c958:
    // 0x19c958: 0xc064bf8  jal         func_192FE0
label_19c95c:
    if (ctx->pc == 0x19C95Cu) {
        ctx->pc = 0x19C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C958u;
        // 0x19c95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C960u;
        goto label_19c960;
    }
    ctx->pc = 0x19C958u;
    SET_GPR_U32(ctx, 31, 0x19C960u);
    ctx->pc = 0x19C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C958u;
    // 0x19c95c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x19C958u, 0x19C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C960u;
label_19c960:
    // 0x19c960: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c964:
    // 0x19c964: 0xc064bd4  jal         func_192F50
label_19c968:
    if (ctx->pc == 0x19C968u) {
        ctx->pc = 0x19C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C964u;
        // 0x19c968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C96Cu;
        goto label_19c96c;
    }
    ctx->pc = 0x19C964u;
    SET_GPR_U32(ctx, 31, 0x19C96Cu);
    ctx->pc = 0x19C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C964u;
    // 0x19c968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F50u, 0x19C964u, 0x19C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C96Cu;
label_19c96c:
    // 0x19c96c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c970:
    // 0x19c970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c974:
    // 0x19c974: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c978:
    // 0x19c978: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19c97c:
    // 0x19c97c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19c980:
    // 0x19c980: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19c984:
    // 0x19c984: 0xa065007a  sb          $a1, 0x7A($v1)
    ctx->pc = 0x19c984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 122), (uint8_t)GPR_U32(ctx, 5));
label_19c988:
    // 0x19c988: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x19c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c98c:
    // 0x19c98c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19c990:
    // 0x19c990: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19c990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19c994:
    // 0x19c994: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19c998:
    // 0x19c998: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19c99c:
    // 0x19c99c: 0xa06501d3  sb          $a1, 0x1D3($v1)
    ctx->pc = 0x19c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
label_19c9a0:
    // 0x19c9a0: 0x10000076  b           . + 4 + (0x76 << 2)
label_19c9a4:
    if (ctx->pc == 0x19C9A4u) {
        ctx->pc = 0x19C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9A0u;
        // 0x19c9a4: 0xae450674  sw          $a1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9A8u;
        goto label_fallthrough_0x19c9a0;
    }
    ctx->pc = 0x19C9A0u;
    {
        const bool branch_taken_0x19c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9A0u;
        // 0x19c9a4: 0xae450674  sw          $a1, 0x674($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9a0) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
label_fallthrough_0x19c9a0:
    ctx->pc = 0x19C9A8u;
}
