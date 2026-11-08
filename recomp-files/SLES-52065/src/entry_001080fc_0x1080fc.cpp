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

// Function: entry_001080fc
// Address: 0x1080fc - 0x108168
void entry_001080fc_0x1080fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001080fc_0x1080fc");
#endif

    switch (ctx->pc) {
        case 0x108154u: goto label_108154;
        default: break;
    }

    ctx->pc = 0x1080fcu;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x108168u;
}
