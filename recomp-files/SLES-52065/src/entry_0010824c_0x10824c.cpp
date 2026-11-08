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

// Function: entry_0010824c
// Address: 0x10824c - 0x1082bc
void entry_0010824c_0x10824c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010824c_0x10824c");
#endif

    switch (ctx->pc) {
        case 0x1082a8u: goto label_1082a8;
        default: break;
    }

    ctx->pc = 0x10824cu;

    // 0x10824c: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x10824cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x108250: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x108250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x108254: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108254u;
    {
        const bool branch_taken_0x108254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108254) {
            ctx->pc = 0x1082BCu;
            return;
        }
    }
    ctx->pc = 0x10825Cu;
    // 0x10825c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x10825cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x108260: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108264: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x108264u;
    {
        const bool branch_taken_0x108264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108264) {
            ctx->pc = 0x1082BCu;
            return;
        }
    }
    ctx->pc = 0x10826Cu;
    // 0x10826c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x10826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x108270: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x108270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108274: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x108274u;
    {
        const bool branch_taken_0x108274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108274u;
        // 0x108278: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108274) {
            ctx->pc = 0x1082BCu;
            return;
        }
    }
    ctx->pc = 0x10827Cu;
    // 0x10827c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x108280: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x108280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x108284: 0x3c02468c  lui         $v0, 0x468C
    ctx->pc = 0x108284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18060 << 16));
    // 0x108288: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x108288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10828c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x10828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x108290: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x108290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x108294: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x108294u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x108298: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x108298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10829c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x10829cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1082a0: 0xc041ddc  jal         func_107770
    ctx->pc = 0x1082A0u;
    SET_GPR_U32(ctx, 31, 0x1082A8u);
    ctx->pc = 0x1082A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1082A0u;
    // 0x1082a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107770u, 0x1082A0u, 0x1082A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1082A8u;
label_1082a8:
    // 0x1082a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1082a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1082ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1082acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1082b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1082b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1082b4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1082B4u;
    {
        const bool branch_taken_0x1082b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082B4u;
        // 0x1082b8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082b4) {
            ctx->pc = 0x108378u;
            return;
        }
    }
    ctx->pc = 0x1082BCu;
}
