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

// Function: entry_0015ef90
// Address: 0x15ef90 - 0x15f048
void entry_0015ef90_0x15ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ef90_0x15ef90");
#endif

    switch (ctx->pc) {
        case 0x15efd0u: goto label_15efd0;
        case 0x15f004u: goto label_15f004;
        default: break;
    }

    ctx->pc = 0x15ef90u;

label_15ef90:
    // 0x15ef90: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15ef94:
    // 0x15ef94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ef98:
    // 0x15ef98: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15ef9c:
    // 0x15ef9c: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15ef9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15efa0:
    // 0x15efa0: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
label_15efa4:
    if (ctx->pc == 0x15EFA4u) {
        ctx->pc = 0x15EFA8u;
        goto label_15efa8;
    }
    ctx->pc = 0x15EFA0u;
    {
        const bool branch_taken_0x15efa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15efa0) {
            ctx->pc = 0x15F094u;
            return;
        }
    }
    ctx->pc = 0x15EFA8u;
label_15efa8:
    // 0x15efa8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15efa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15efac:
    // 0x15efac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15efacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15efb0:
    // 0x15efb0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efb4:
    // 0x15efb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15efb8:
    // 0x15efb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efbc:
    // 0x15efbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15efc0:
    // 0x15efc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15efc4:
    // 0x15efc4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15efc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15efc8:
    // 0x15efc8: 0x320f809  jalr        $t9
label_15efcc:
    if (ctx->pc == 0x15EFCCu) {
        ctx->pc = 0x15EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC8u;
        // 0x15efcc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFD0u;
        goto label_15efd0;
    }
    ctx->pc = 0x15EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15EFD0u);
        ctx->pc = 0x15EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC8u;
        // 0x15efcc: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFC8u, 0x15EFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EFD0u;
label_15efd0:
    // 0x15efd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15efd4:
    // 0x15efd4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15efd8:
    // 0x15efd8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15efdc:
    // 0x15efdc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efe0:
    // 0x15efe0: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15efe4:
    // 0x15efe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15efe8:
    // 0x15efe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15efec:
    // 0x15efec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15eff0:
    // 0x15eff0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15eff4:
    // 0x15eff4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15eff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15eff8:
    // 0x15eff8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15effc:
    // 0x15effc: 0x320f809  jalr        $t9
label_15f000:
    if (ctx->pc == 0x15F000u) {
        ctx->pc = 0x15F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFFCu;
        // 0x15f000: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F004u;
        goto label_15f004;
    }
    ctx->pc = 0x15EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F004u);
        ctx->pc = 0x15F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFFCu;
        // 0x15f000: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFFCu, 0x15F004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F004u;
label_15f004:
    // 0x15f004: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f008:
    // 0x15f008: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_15f00c:
    if (ctx->pc == 0x15F00Cu) {
        ctx->pc = 0x15F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F008u;
        // 0x15f00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F010u;
        goto label_15f010;
    }
    ctx->pc = 0x15F008u;
    {
        const bool branch_taken_0x15f008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F008u;
        // 0x15f00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f008) {
            ctx->pc = 0x15F05Cu;
            return;
        }
    }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x1446000d  bne         $v0, $a2, . + 4 + (0xD << 2)
label_15f014:
    if (ctx->pc == 0x15F014u) {
        ctx->pc = 0x15F018u;
        goto label_15f018;
    }
    ctx->pc = 0x15F010u;
    {
        const bool branch_taken_0x15f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x15f010) {
            ctx->pc = 0x15F048u;
            return;
        }
    }
    ctx->pc = 0x15F018u;
label_15f018:
    // 0x15f018: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f01c:
    // 0x15f01c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f020:
    // 0x15f020: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x15f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f024:
    // 0x15f024: 0x8c6201fc  lw          $v0, 0x1FC($v1)
    ctx->pc = 0x15f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_15f028:
    // 0x15f028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15f02c:
    // 0x15f02c: 0xac6201fc  sw          $v0, 0x1FC($v1)
    ctx->pc = 0x15f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 508), GPR_U32(ctx, 2));
label_15f030:
    // 0x15f030: 0x846201fa  lh          $v0, 0x1FA($v1)
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 506)));
label_15f034:
    // 0x15f034: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x15f034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_15f038:
    // 0x15f038: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15f03c:
    if (ctx->pc == 0x15F03Cu) {
        ctx->pc = 0x15F040u;
        goto label_15f040;
    }
    ctx->pc = 0x15F038u;
    {
        const bool branch_taken_0x15f038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f038) {
            ctx->pc = 0x15F048u;
            return;
        }
    }
    ctx->pc = 0x15F040u;
label_15f040:
    // 0x15f040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15f044:
    // 0x15f044: 0xa46201fa  sh          $v0, 0x1FA($v1)
    ctx->pc = 0x15f044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 506), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15f048u;
}
