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

// Function: entry_0019cbb4
// Address: 0x19cbb4 - 0x19cc1c
void entry_0019cbb4_0x19cbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cbb4_0x19cbb4");
#endif

    switch (ctx->pc) {
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc0cu: goto label_19cc0c;
        case 0x19cc18u: goto label_19cc18;
        default: break;
    }

    ctx->pc = 0x19cbb4u;

    // 0x19cbb4: 0x8e430694  lw          $v1, 0x694($s2)
    ctx->pc = 0x19cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
    // 0x19cbb8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19CBB8u;
    {
        const bool branch_taken_0x19cbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBB8u;
        // 0x19cbbc: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cbb8) {
            ctx->pc = 0x19CC1Cu;
            return;
        }
    }
    ctx->pc = 0x19CBC0u;
    // 0x19cbc0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19cbc4: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x19cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cbc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19cbcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19cbd0: 0xc042570  jal         func_1095C0
    ctx->pc = 0x19CBD0u;
    SET_GPR_U32(ctx, 31, 0x19CBD8u);
    ctx->pc = 0x19CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBD0u;
    // 0x19cbd4: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x19CBD0u, 0x19CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CBD8u;
label_19cbd8:
    // 0x19cbd8: 0x8e430694  lw          $v1, 0x694($s2)
    ctx->pc = 0x19cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
    // 0x19cbdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19cbe0: 0xae430694  sw          $v1, 0x694($s2)
    ctx->pc = 0x19cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
    // 0x19cbe4: 0x8e430694  lw          $v1, 0x694($s2)
    ctx->pc = 0x19cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1684)));
    // 0x19cbe8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19CBE8u;
    {
        const bool branch_taken_0x19cbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cbe8) {
            ctx->pc = 0x19CC1Cu;
            return;
        }
    }
    ctx->pc = 0x19CBF0u;
    // 0x19cbf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19cbf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19cbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19cbf8: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x19CBF8u;
    SET_GPR_U32(ctx, 31, 0x19CC00u);
    ctx->pc = 0x19CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBF8u;
    // 0x19cbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x19CBF8u, 0x19CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC00u;
label_19cc00:
    // 0x19cc00: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cc04: 0xc064bf8  jal         func_192FE0
    ctx->pc = 0x19CC04u;
    SET_GPR_U32(ctx, 31, 0x19CC0Cu);
    ctx->pc = 0x19CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC04u;
    // 0x19cc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x19CC04u, 0x19CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC0Cu;
label_19cc0c:
    // 0x19cc0c: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x19cc10: 0xc064bd4  jal         func_192F50
    ctx->pc = 0x19CC10u;
    SET_GPR_U32(ctx, 31, 0x19CC18u);
    ctx->pc = 0x19CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC10u;
    // 0x19cc14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192F50u, 0x19CC10u, 0x19CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CC18u;
label_19cc18:
    // 0x19cc18: 0xae400690  sw          $zero, 0x690($s2)
    ctx->pc = 0x19cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 0));
    ctx->pc = 0x19cc1cu;
}
