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

// Function: entry_0010e584
// Address: 0x10e584 - 0x10e6a4
void entry_0010e584_0x10e584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e584_0x10e584");
#endif

    ctx->pc = 0x10e584u;

label_10e584:
    // 0x10e584: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e584u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e588: 0xbd3021  addu        $a2, $a1, $sp
    ctx->pc = 0x10e588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x10e58c: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x10e58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x10e590: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10e594: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x10e594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e598: 0x43402a  slt         $t0, $v0, $v1
    ctx->pc = 0x10e598u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e59c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10e59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10e5a0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e5a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e5a4: 0x85290000  lh          $t1, 0x0($t1)
    ctx->pc = 0x10e5a4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x10e5a8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e5ac: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e5b0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e5b4: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e5b8: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x10e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x10e5bc: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e5bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e5c0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e5c4: 0x85290002  lh          $t1, 0x2($t1)
    ctx->pc = 0x10e5c4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x10e5c8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e5cc: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e5d0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e5d4: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e5d8: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x10e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x10e5dc: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e5e0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e5e4: 0x85290004  lh          $t1, 0x4($t1)
    ctx->pc = 0x10e5e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x10e5e8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e5ec: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e5f0: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e5f4: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e5f8: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x10e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x10e5fc: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e600: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e604: 0x85290006  lh          $t1, 0x6($t1)
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x10e608: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e608u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e60c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e60cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e610: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e614: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e614u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e618: 0xace9000c  sw          $t1, 0xC($a3)
    ctx->pc = 0x10e618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 9));
    // 0x10e61c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e61cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e620: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e624: 0x85290008  lh          $t1, 0x8($t1)
    ctx->pc = 0x10e624u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x10e628: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e628u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e62c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e630: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e634: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e634u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e638: 0xace90010  sw          $t1, 0x10($a3)
    ctx->pc = 0x10e638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 9));
    // 0x10e63c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e63cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e640: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e644: 0x8529000a  lh          $t1, 0xA($t1)
    ctx->pc = 0x10e644u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x10e648: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e648u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e64c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e650: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e654: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e658: 0xace90014  sw          $t1, 0x14($a3)
    ctx->pc = 0x10e658u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 9));
    // 0x10e65c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e65cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e660: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e664: 0x8529000c  lh          $t1, 0xC($t1)
    ctx->pc = 0x10e664u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10e668: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e668u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e66c: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x10e66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e670: 0x8d292cd8  lw          $t1, 0x2CD8($t1)
    ctx->pc = 0x10e670u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 11480)));
    // 0x10e674: 0x8d2901d4  lw          $t1, 0x1D4($t1)
    ctx->pc = 0x10e674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 468)));
    // 0x10e678: 0xace90018  sw          $t1, 0x18($a3)
    ctx->pc = 0x10e678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 9));
    // 0x10e67c: 0x8e290210  lw          $t1, 0x210($s1)
    ctx->pc = 0x10e67cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e680: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x10e680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e684: 0x8529000e  lh          $t1, 0xE($t1)
    ctx->pc = 0x10e684u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x10e688: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x10e688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x10e68c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x10e68cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x10e690: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x10e690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x10e694: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x10e694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
    // 0x10e698: 0x8cc601d4  lw          $a2, 0x1D4($a2)
    ctx->pc = 0x10e698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 468)));
    // 0x10e69c: 0x1500ffb9  bnez        $t0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x10E69Cu;
    {
        const bool branch_taken_0x10e69c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E69Cu;
        // 0x10e6a0: 0xace6001c  sw          $a2, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e69c) {
            ctx->pc = 0x10E584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e584;
        }
    }
    ctx->pc = 0x10E6A4u;
}
