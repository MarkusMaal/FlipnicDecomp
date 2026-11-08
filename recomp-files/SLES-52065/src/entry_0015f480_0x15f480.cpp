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

// Function: entry_0015f480
// Address: 0x15f480 - 0x15f594
void entry_0015f480_0x15f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f480_0x15f480");
#endif

    switch (ctx->pc) {
        case 0x15f4dcu: goto label_15f4dc;
        case 0x15f514u: goto label_15f514;
        case 0x15f55cu: goto label_15f55c;
        default: break;
    }

    ctx->pc = 0x15f480u;

label_15f480:
    // 0x15f480: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f484:
    // 0x15f484: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f488:
    // 0x15f488: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f48c:
    // 0x15f48c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f490:
    // 0x15f490: 0x84650020  lh          $a1, 0x20($v1)
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15f494:
    // 0x15f494: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x15f494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_15f498:
    // 0x15f498: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
label_15f49c:
    if (ctx->pc == 0x15F49Cu) {
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x28a10040  slti        $at, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4A0u;
        goto label_15f4a0;
    }
    ctx->pc = 0x15F498u;
    {
        const bool branch_taken_0x15f498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x28a10040  slti        $at, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f498) {
            ctx->pc = 0x15F628u;
            return;
        }
    }
    ctx->pc = 0x15F4A0u;
label_15f4a0:
    // 0x15f4a0: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
label_15f4a4:
    if (ctx->pc == 0x15F4A4u) {
        ctx->pc = 0x15F4A8u;
        goto label_15f4a8;
    }
    ctx->pc = 0x15F4A0u;
    {
        const bool branch_taken_0x15f4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4a0) {
            ctx->pc = 0x15F628u;
            return;
        }
    }
    ctx->pc = 0x15F4A8u;
label_15f4a8:
    // 0x15f4a8: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15f4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15f4ac:
    // 0x15f4ac: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
label_15f4b0:
    if (ctx->pc == 0x15F4B0u) {
        ctx->pc = 0x15F4B4u;
        goto label_15f4b4;
    }
    ctx->pc = 0x15F4ACu;
    {
        const bool branch_taken_0x15f4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f4ac) {
            ctx->pc = 0x15F628u;
            return;
        }
    }
    ctx->pc = 0x15F4B4u;
label_15f4b4:
    // 0x15f4b4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f4b8:
    // 0x15f4b8: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f4bc:
    // 0x15f4bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4c0:
    // 0x15f4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f4c4:
    // 0x15f4c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4c8:
    // 0x15f4c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f4cc:
    // 0x15f4cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f4d0:
    // 0x15f4d0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_15f4d4:
    // 0x15f4d4: 0x320f809  jalr        $t9
label_15f4d8:
    if (ctx->pc == 0x15F4D8u) {
        ctx->pc = 0x15F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D4u;
        // 0x15f4d8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4DCu;
        goto label_15f4dc;
    }
    ctx->pc = 0x15F4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F4DCu);
        ctx->pc = 0x15F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4D4u;
        // 0x15f4d8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4D4u, 0x15F4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4DCu;
label_15f4dc:
    // 0x15f4dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f4e0:
    // 0x15f4e0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f4e4:
    // 0x15f4e4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f4e8:
    // 0x15f4e8: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15f4ec:
    // 0x15f4ec: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f4f0:
    // 0x15f4f0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4f4:
    // 0x15f4f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f4f8:
    // 0x15f4f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f4fc:
    // 0x15f4fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f500:
    // 0x15f500: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f504:
    // 0x15f504: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f508:
    // 0x15f508: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15f50c:
    // 0x15f50c: 0x320f809  jalr        $t9
label_15f510:
    if (ctx->pc == 0x15F510u) {
        ctx->pc = 0x15F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F50Cu;
        // 0x15f510: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F514u;
        goto label_15f514;
    }
    ctx->pc = 0x15F50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F514u);
        ctx->pc = 0x15F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F50Cu;
        // 0x15f510: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F50Cu, 0x15F514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F514u;
label_15f514:
    // 0x15f514: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15f514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15f518:
    // 0x15f518: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
label_15f51c:
    if (ctx->pc == 0x15F51Cu) {
        ctx->pc = 0x15F520u;
        goto label_15f520;
    }
    ctx->pc = 0x15F518u;
    {
        const bool branch_taken_0x15f518 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f518) {
            ctx->pc = 0x15F5ECu;
            return;
        }
    }
    ctx->pc = 0x15F520u;
label_15f520:
    // 0x15f520: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_15f524:
    // 0x15f524: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f528:
    // 0x15f528: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x15f528u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15f52c:
    // 0x15f52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f530:
    // 0x15f530: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15f534:
    // 0x15f534: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f538:
    // 0x15f538: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f53c:
    // 0x15f53c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f540:
    // 0x15f540: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f544:
    // 0x15f544: 0xa4640236  sh          $a0, 0x236($v1)
    ctx->pc = 0x15f544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 566), (uint16_t)GPR_U32(ctx, 4));
label_15f548:
    // 0x15f548: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15f54c:
    // 0x15f54c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f550:
    // 0x15f550: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15f550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15f554:
    // 0x15f554: 0x320f809  jalr        $t9
label_15f558:
    if (ctx->pc == 0x15F558u) {
        ctx->pc = 0x15F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F554u;
        // 0x15f558: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F55Cu;
        goto label_15f55c;
    }
    ctx->pc = 0x15F554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F55Cu);
        ctx->pc = 0x15F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F554u;
        // 0x15f558: 0x24650040  addiu       $a1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F554u, 0x15F55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F55Cu;
label_15f55c:
    // 0x15f55c: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15f55cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_15f560:
    // 0x15f560: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_15f564:
    if (ctx->pc == 0x15F564u) {
        ctx->pc = 0x15F568u;
        goto label_15f568;
    }
    ctx->pc = 0x15F560u;
    {
        const bool branch_taken_0x15f560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f560) {
            ctx->pc = 0x15F5ECu;
            return;
        }
    }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
label_15f56c:
    if (ctx->pc == 0x15F56Cu) {
        ctx->pc = 0x15F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F568u;
        // 0x15f56c: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F570u;
        goto label_15f570;
    }
    ctx->pc = 0x15F568u;
    {
        const bool branch_taken_0x15f568 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F568u;
        // 0x15f56c: 0x131900  sll         $v1, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f568) {
            ctx->pc = 0x15F594u;
            return;
        }
    }
    ctx->pc = 0x15F570u;
label_15f570:
    // 0x15f570: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f574:
    // 0x15f574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15f578:
    // 0x15f578: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15f57c:
    // 0x15f57c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f580:
    // 0x15f580: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f584:
    // 0x15f584: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_15f588:
    // 0x15f588: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
label_15f58c:
    if (ctx->pc == 0x15F58Cu) {
        ctx->pc = 0x15F590u;
        goto label_15f590;
    }
    ctx->pc = 0x15F588u;
    {
        const bool branch_taken_0x15f588 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x15f588) {
            ctx->pc = 0x15F594u;
            return;
        }
    }
    ctx->pc = 0x15F590u;
label_15f590:
    // 0x15f590: 0xa483022e  sh          $v1, 0x22E($a0)
    ctx->pc = 0x15f590u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 558), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15f594u;
}
